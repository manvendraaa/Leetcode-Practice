class Solution {
public:
    void  subset(set<vector<int>>& ans,vector<int> &nums,int idx,vector<int> curr){ 
        
        if(idx == nums.size()){
            sort(curr.begin(),curr.end());
            ans.insert(curr);
            return;
        }
        
        subset(ans,nums, idx+1 , curr);
        curr.push_back(nums[idx]);
        subset(ans,nums, idx+1 , curr);
            
        return;
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        set<vector<int>> ans;
        subset(ans, nums,0,curr);
        
        vector<vector<int> > ans1;
        for(auto i : ans){
            ans1.push_back(i);
        }
        return ans1;
    }
};