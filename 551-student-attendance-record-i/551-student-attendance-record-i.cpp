class Solution {
public:
    bool checkRecord(string s) {
        int count=0,count2=0;
        bool flag = false;
        for(auto i: s){
            if(i =='L'){
                count++;
            }
            else{
                count = 0;
            }
            
            if(count>=3){
                flag = true;   
            }
            if(i == 'A'){
                count2++;
            }
        }
        if(count2 >= 2 || flag == true){
            return false;
        }
        return true;
    }
};