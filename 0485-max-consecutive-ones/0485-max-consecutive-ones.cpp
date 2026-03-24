class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if ( nums.size()==0 ) return 0;
        int cnt=0,maxCount=0;
        for(auto it : nums){
            if(it==1){
                cnt++;
                maxCount=max(cnt,maxCount);
            }else {
                cnt=0;
            }
        }
        return maxCount;
    }
};