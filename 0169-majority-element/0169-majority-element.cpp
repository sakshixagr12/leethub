class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums) mpp[it]++;
        for(auto el:mpp){
            if(el.second > nums.size()/2) return el.first;
        }
        return -1;
        
    }
};