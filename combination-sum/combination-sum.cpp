class Solution {
public:
    vector<vector<int>> ans;
    void csum(vector<int>& arr , int target, int idx, vector<int> curr ){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if( target < 0)return;
        if(idx == arr.size())return;
        // not take
        csum(arr,target,idx+1,curr);
        //take
        curr.push_back(arr[idx]);
        csum(arr,target- arr[idx],idx,curr);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        csum(candidates, target, 0, curr);
        return ans;
    }
};