class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = 0;
        
        int median = n%2==0?((nums[n/2]+nums[n/2-1]))/2:nums[n/2];
        
        for(int i: nums)res+=abs(i- median);
        
        return res;
    }
};