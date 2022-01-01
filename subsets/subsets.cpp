class Solution {
public:
    
//     void  subset(vector<vector<int>>& ans,vector<int> &nums,int idx,vector<int> curr){ 
        
//         if(idx == nums.size()){
//             ans.push_back(curr);
//             return;
//         }
        
//         subset(ans,nums, idx+1 , curr);
//         curr.push_back(nums[idx]);
//         subset(ans,nums, idx+1 , curr);
            
//         return;
        
//     }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr1;
        ans.push_back(curr1);
        for(auto num : nums){//1 2 3 example
            int n = ans.size();
            for(int i = 0;i<n;i++){
                vector<int> curr = ans[i];
                curr.push_back(num);
                ans.push_back(curr);
            }
        }
        
        return ans;
    }
};