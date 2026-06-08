class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
            int firstNum=nums[i];
            int secondNum=target-firstNum;
            if(mpp.find(secondNum)!=mpp.end())
                return {i,mpp[secondNum]};
            mpp[firstNum]=i;
        }
        return {-1,-1};
    }
};