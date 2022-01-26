class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l = 0,r = n-1;
        int res = 0;
        while(l<r){
            res+= nums[r--]-nums[l++];
        }
        return res;
    }
};