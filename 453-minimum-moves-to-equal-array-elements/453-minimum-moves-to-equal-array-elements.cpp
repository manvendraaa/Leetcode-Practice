class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0,mini = INT_MAX-1;
        for(int i : nums){
            sum+=i;
            mini = min(mini,i);
        }
        return sum - (nums.size()*mini);
        
        
    }
};