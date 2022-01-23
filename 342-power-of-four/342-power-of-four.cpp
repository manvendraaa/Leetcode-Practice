class Solution {
public:
    bool isPowerOfFour(int a) {
        unsigned int n =a;
        if(n&(n-1)){
            return false;
        }
        
        for(int i = 0;i<32;i++){
            if(n &(1<<i) && i%2 == 0){
                return true;
            }
        }
        
        return false;
        
        
        
    }
};