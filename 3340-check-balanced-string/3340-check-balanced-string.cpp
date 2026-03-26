class Solution {
public:
    bool isBalanced(string num) {
       int esum=0,osum=0;
       for(int i =0;i<num.size();i++){
        if(i%2==0){
            esum+=(num[i]-'0');
        }else osum+=(num[i]-'0');
       }
       if(esum==osum) return true;
       return false; 
    }
};