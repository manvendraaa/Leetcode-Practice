class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool hash[1001];
        for(int i = 0;i<1001;i++)hash[i]=0;
        for(auto i:nums)hash[i] = 1;
        
        while(original <= 1000 && hash[original] == 1 ){
            original*=2;
        }
        return original;
        
    }
};