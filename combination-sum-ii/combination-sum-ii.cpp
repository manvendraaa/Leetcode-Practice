class Solution {
public:
    vector<vector<int>> ans;
    void csum(vector<int>& arr , int target, int idx, vector<int>& curr,bool prev ){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if( target < 0)return;
        if(idx == arr.size())return;
        
        // not take
        csum(arr,target,idx+1,curr,false);
        
        if(idx>0 && prev == false && arr[idx] == arr[idx-1])return;
        
        //take
        curr.push_back(arr[idx]);
        csum(arr,target- arr[idx],idx+1,curr,true);
        curr.pop_back();
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        csum(candidates, target, 0, curr,false);
        
        return ans;
    }
};