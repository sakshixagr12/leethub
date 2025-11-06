class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<int>ans;
        unordered_map<int,int>mpp;

        

        for(auto it:nums){
            mpp[it]++;
        }

        for(int i=1;i<=nums.size();i++){
            if(mpp[i]==2) ans.push_back(i);
            if(mpp[i]==0) ans.push_back(i);
        }
    
        return ans;
    }
};