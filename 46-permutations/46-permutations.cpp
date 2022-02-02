class Solution {
public:
    vector<vector<int>> ultimate;
    void per(vector<int>&nums,vector<int>& ans,vector<int>& visited){
        if(ans.size() == nums.size()){
            ultimate.push_back(ans);
            return;
        }
        for(int i = 0;i<nums.size();i++){
            if(visited[i] == 0){
                ans.push_back(nums[i]);
                visited[i] = 1;
                per(nums,ans,visited);
                ans.pop_back();
                visited[i] = 0;
            }   
        }
           
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<int> visited(nums.size(),0);
        per(nums,ans,visited);
        return ultimate;
    }
    
};