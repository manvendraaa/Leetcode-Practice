class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();

        unsigned int a = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        // Get its last set bit
        a &= -a;
        // a is 3^5 now find the element different in both and divide array based on that
        // xor me set bit matlab dono me diff.
        
        // leftmost set bit in both
        // int mask = a^(a & (a-1));
        
         int res1 = 0,res2= 0;
        for(int i= 0;i<n;i++){
            if(a & nums[i]){
                res1 = res1^nums[i];
            }
            else{
                res2 = res2^nums[i];
            }
        }
        return {res1,res2};
        
        
        
        
    }
};