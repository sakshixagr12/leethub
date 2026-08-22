class Solution {
public:
    bool checkDivisibility(int n) {
        
        int prod=1,sum=0;
        int temp=n;
        while(temp!=0){
            prod*=(temp%10);
            sum+=(temp%10);
            temp/=10;
        }
        int div=prod+sum;
        if(n%div==0) return true;
        return false;
    }
};