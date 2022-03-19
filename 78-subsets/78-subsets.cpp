class Solution {
public:
    void  subset(vector<vector<int>>& ans,vector<int> &nums,int idx,vector<int>& curr){
        
         if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }
        
        
        
        subset(ans,nums, idx+1 , curr); // nahi liya
        curr.push_back(nums[idx]);
        subset(ans,nums, idx+1 , curr); // le liya
        curr.pop_back();
        
        return;
    }
    
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr; // currently jispe kaam chal raha hai
        vector<vector<int>> ans; // global bana skte hai
        subset(ans, nums,0,curr);
        return ans;
    }
};