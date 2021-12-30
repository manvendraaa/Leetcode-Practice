class Solution {
public:
    
    void  subset(vector<vector<int>>& ans,vector<int> &nums,int idx,vector<int> curr){ 
        
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }
        
        subset(ans,nums, idx+1 , curr);
        curr.push_back(nums[idx]);
        subset(ans,nums, idx+1 , curr);
            
        return;
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans;
        subset(ans, nums,0,curr);
        return ans;
    }
};