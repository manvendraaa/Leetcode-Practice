// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long sum)
    {
        // Your code here
        // unordered_map<long long,int> mp;
        // long long curr = 0;
        // for(int i = 0;i<n;i++){
        //     curr = curr+arr[i];
        //     if(curr == s){
        //         return {1,i+1};
        //     }
        //     else if(mp.find(curr - s) != mp.end()){
        //         return {mp[curr -s]+1,i+1};
        //     }
        //     else mp[curr] = i+1;
        // }
        // return {-1};
        
    int curr_sum = arr[0], start = 0, i;

    
    
    
    for (i = 1; i <= n; i++) {
        
        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        
        
        if (curr_sum == sum) {
            return {start+1,i};
        }

        if (i < n)
            curr_sum = curr_sum + arr[i];
    }

    // If we reach here, then no subarray

    return {-1};
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends