class Solution {
public:
    bool Isprime(int n ) {
        if(n<=1) return false;
        for(int i=2; i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
      //  vector<int>prime;
        int n = nums.size();
        int firstPrimeNum=-1;
        for(int i=0; i<n; i++) {
            if(Isprime(nums[i])){
                firstPrimeNum=i;
                break;
            }
        }
        int lastprime=firstPrimeNum;
        for(int i=firstPrimeNum;i<n;i++){
            if( Isprime(nums[i])) lastprime=i;
        }
        return lastprime-firstPrimeNum;
    }
};