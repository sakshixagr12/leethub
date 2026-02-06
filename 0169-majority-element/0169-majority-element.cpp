class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=0;
        int cnt=0;
        for(auto it:nums){
            if(cnt==0){
                el=it;
                cnt++;
            }else if(el==it)cnt++;
            else cnt--;
        }
        int cnt1=0;
        for(auto it:nums){
            if(it==el)cnt1++;
        }
        if(cnt1>nums.size()/2)return el;
        return -1;
    }
};