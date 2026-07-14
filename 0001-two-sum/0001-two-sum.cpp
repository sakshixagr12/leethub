class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        int n = nums.size();

        for(int i = 0 ; i<n ; i++ ) {
            int sec_num=target-nums[i];
            if(hash.find(sec_num)!=hash.end()){
                return {i,hash[sec_num]};
            }
            hash[nums[i]]=i;
        }
        return {-1,-1};
    }
};