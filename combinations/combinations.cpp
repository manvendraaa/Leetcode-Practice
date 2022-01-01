class Solution {
public:
    void  subset(vector<vector<int>>& ans,vector<int> &nums,int idx,vector<int>& curr,int k){ 
        if(curr.size()>k)return;
        if(idx == nums.size()){
            if(curr.size() == k)
                ans.push_back(curr);
            return;
        }
        
        subset(ans,nums, idx+1 , curr,k);
        curr.push_back(nums[idx]);
        subset(ans,nums, idx+1 , curr,k);
        curr.pop_back();
        return;
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i = 1;i<=n;i++)nums.push_back(i);
        vector<int> curr;
        vector<vector<int>> ans;
        subset(ans, nums,0,curr,k);
        return ans;
    }
};