int dp[100];
class Solution {
public:
    
    int climbStairs(int n) {
        if(n == 1 || n == 2){
		// dp[0] = 0;
		// dp[1] = 1;
		return n; // fib 0 = 0, fib 1 = 1
	}
	// 0 1 1 2 3 5 8
	if(dp[n] != 0){
		return dp[n];
	}
	dp[n] =climbStairs(n-1)+ climbStairs(n-2);
	return dp[n];
        // return climbStairs(n-1)+ climbStairs(n-2);
    }
};