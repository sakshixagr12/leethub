class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0;
        int cnt=0;
        for(auto it:nums){
            if(it==1){
                cnt++;
                len=max(len,cnt);
            }else{
                cnt=0;
            }
        }
        return len;
    }
};