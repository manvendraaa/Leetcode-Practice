class Solution {
public:
    int countElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mini = INT_MAX,maxi = INT_MIN;
        for(auto i: nums){
            if(i<mini)mini = i;
            if(i>maxi)maxi = i;
            mp[i]++;
        }
        int n= nums.size();
        int count= 0;
        
        n = n - mp[mini]-mp[maxi];
        
        if(n>0)return n;
        return 0;
        
        
        
        
    }
};