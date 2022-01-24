class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        //if n == 7 
        vector<int> prefix(n+1);
        prefix[0] = 0;
        for(int i = 1;i<n+1;i++)prefix[i] = prefix[i-1] + nums[i-1];
        
        int l = 0,r= 1;
        int ans = INT_MAX;
        while(r<(n+1) && l<(n+1)){
            int sum = prefix[r]-prefix[l];
            
            if(sum>=target){
                ans = min(ans,r-l);
                l++; 
            }
            else{
                r++;
            }   
        }
        
        if(ans==INT_MAX)return 0;
        return ans;
        
        
    }
};