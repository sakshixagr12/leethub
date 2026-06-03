class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int n = nums.size();
        // for(int i = 0 ; i<n ; i++){
        //     long long lsum=0;
        //     long long rsum=0;
        //     //leftSum
        //     for(int j = 0 ; j<i ; j++){
        //         lsum+=nums[j];
        //     }
        //     //rightSum
        //     for(int j = i+1 ; j<n ; j++){
        //         rsum+=nums[j];
        //     }
        //     if(lsum==rsum)return i;
        // }
        // return -1;

        // int n = nums.size();
        // vector<int>prefix(n);
        // prefix[0]=nums[0];
        // int lsum=0,rsum=0;
        // for(int i =1;i<n ;i++)prefix[i]=prefix[i-1]+nums[i];
        // int total = prefix[n-1];
        // for(int i = 0 ;i<n;i++){
        //     if(i==0) lsum=0;
        //     else lsum=prefix[i-1];
        //     rsum=total-prefix[i];
        //     if(lsum==rsum) return i;
        // }
        // return -1;

        int n = nums.size();
        int sum=0;
        for(auto it : nums) sum+=it;

        int lsum=0;
        int rsum=0;

        for(int i = 0 ; i<n ; i++){
            if(i==0)lsum=0;
            else lsum+=nums[i-1];

            rsum=sum-(lsum+nums[i]);
            
            if(lsum==rsum)return i;
        }
        return -1;
    }
};