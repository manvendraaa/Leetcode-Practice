class Solution {
public:
    
    void  subset(vector<vector<int>>& ans,vector<int> &nums,int idx,vector<int> curr,int k,int target){ 
        if(target < 0)return;
        if(target == 0){
            if(curr.size() == k){
                ans.push_back(curr);
                return;
            }
        }
        if(idx == nums.size()){
            return;
        }
        
        subset(ans,nums, idx+1 , curr,k,target);
        curr.push_back(nums[idx]);
        subset(ans,nums, idx+1 , curr,k,target - nums[idx]);
            
        return;
        
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        // generate all the subsets and then if the length is same and then sum is also same then only take in ans
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> curr;
        vector<vector<int>> ans;
        subset(ans, nums,0,curr,k,target);
        return ans;
    }
};