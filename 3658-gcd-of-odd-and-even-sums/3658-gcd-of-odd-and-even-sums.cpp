class Solution {
    int calGcd(int a,int b){
        if(b==0) return a;
        if(a==0) return b;
        if(a==b) return a;
        if(a>b)
            return gcd(b,a%b);
        else
            return gcd(a,b%a);
    }
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum=0,evenSum=0;
        for(int i = 1; i<=n;i++){
            oddSum+=(2*i-1);
        }
        for(int i=1;i<=n;i++) evenSum+=(2*i);
        int ans=calGcd(evenSum,oddSum);
        return ans;
    }
};