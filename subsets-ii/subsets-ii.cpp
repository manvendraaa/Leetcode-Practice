class Solution {
public:
    void  subset(vector<vector<int>>& ans,vector<int> &nums,int idx,vector<int>& curr,bool prev){ 
        
        if(idx == nums.size()){
            
            ans.push_back(curr);
            return;
        }
        
        subset(ans,nums, idx+1 , curr,false); // na lo
        if(idx>0 && !prev && nums[idx] == nums[idx-1])return;
        
        curr.push_back(nums[idx]);
        subset(ans,nums, idx+1 , curr,true); // lo
        curr.pop_back();
        return;
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> curr;
        vector<vector<int>> ans;
        subset(ans, nums,0,curr,false);
        
        return ans;
    }
};