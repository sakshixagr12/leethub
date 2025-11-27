// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        long long high = n;
        int ans=-1;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(isBadVersion(mid)==1){
                ans= mid;
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
        return ans;
    }
};