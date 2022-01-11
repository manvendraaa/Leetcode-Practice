class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //count the no. of set bits at every index
        vector<int> arr(32);
        int count;
        for(int j = 0 ; j < 32;j++){
            count = 0;
            for(int i : nums){
                if(i & (1<<j))count++;
            }
            arr[j] = count%3;
        }
        count = 0;
        for(int i = 0;i<32;i++){
            cout<<arr[i]<<" ";
            count += arr[i] * (1<<i);
        }
        return count;
            
    }
};