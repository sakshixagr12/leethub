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
        vector<int>prime;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(Isprime(nums[i])) prime.push_back(i);
        }
        int k = prime.size();
        return prime[k-1]-prime[0];
    }
};