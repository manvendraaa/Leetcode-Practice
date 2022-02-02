class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0,five = 5;
        while(n/five > 0){

            ans += n/five;
            five *= 5;
        }
        return ans;
    }
};