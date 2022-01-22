class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        // number of set bits in a^b
        int n = nums.size();
        int ans = 0;
        
        // for all the nums count the total 1s at a idx and total 0s finally you can choose any one and zero to make diff bit and so the ans will be for that index 1s*0s 
        // vector<pair<int,int>> res;/
        int count;
        for(int i = 0;i<32;i++){
            count = 0;
            for(int j = 0;j<n;j++){
                if(nums[j] &(1<<i)){
                    count++;
                }
                
            }
            ans+= count*(n-count);
        }
        
//         for(auto i: res){
//             ans += i.first*i.second;
//         }
        
        
        return ans;
        
        
        
        
    }
};