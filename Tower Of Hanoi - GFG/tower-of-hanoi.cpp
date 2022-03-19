// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    // from A
    long long no = 0;
    long long toh(int N, int A, int C, int B) {
        // Your code 
        
        // base
        if(N == 1){
            cout<<"move disk "<<N<<" from rod "<<A<<" to rod "<<C<<endl;
            no++;
            return no;
        }
        
        // 1. n-1 ko a se b lejana using c
        
        toh(N-1,A,B,C);
        cout<<"move disk "<<N<<" from rod "<<A<<" to rod "<<C<<endl;
        no++;
        // cout<<no<<"************ " <<N;
        toh(N-1,B,C,A);
        return no;
        
        // 2. nth kko a  se c lejana 
        
        
        // 3. n - 1 ko b se c lejana using a
        
        
        
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends