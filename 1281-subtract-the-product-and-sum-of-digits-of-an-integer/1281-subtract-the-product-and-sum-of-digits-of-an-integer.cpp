class Solution {
public:
    int subtractProductAndSum(int n) {
        if(n==0)return 0;
        int sum=0;
        int prod=1;
        int temp=n;
        int rem=0;
        while(temp){
            rem=temp%10;
            sum+=rem;
            prod*=rem;
            temp/=10;
        }
        return prod-sum;
    }
};