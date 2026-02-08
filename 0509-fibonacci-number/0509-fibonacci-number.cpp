class Solution {
public:
    int fib(int n) {
        // if(n==1)return 1;
        // else if (n==0)return 0;
        // else
        // return fib(n-1)+fib(n-2);
        if (n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
        int a=1,b=1,c;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;

        }
        return b;
    }
};