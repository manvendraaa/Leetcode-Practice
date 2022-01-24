class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> s;
        for(auto i : nums){
            s[i]++;
        }
        vector<int> ans;
        for(auto i:nums){
            if(s.find(i-1) != s.end() || s.find(i+1) != s.end() || s[i] > 1)continue;
            ans.push_back(i);
        }
        return ans;
    }
};