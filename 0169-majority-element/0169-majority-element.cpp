class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // for(auto it : nums) mpp[it]++;
        // for(auto it : mpp){
        //     if(it.second > nums.size()/2) return it.first;
        // }
        // return -1;
        int cnt = 0;
        int el=nums[0];
        for(auto it : nums){
            if(cnt==0){
                cnt++;
                el=it;
            } else if (el==it) cnt++;
             else cnt--;
        }
        int cnt1=0;
        for(auto it : nums){
            if(it==el)cnt1++;
        }
        if(cnt1> nums.size()/2) return el;
        return -1;
    }
};