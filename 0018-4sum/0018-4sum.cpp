class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        if (nums.size()<4){
            return {};

        }
        if (nums[0] == nums.back()) {
            if (4LL * nums[0] == target) 
                return {{nums[0], nums[0], nums[0], nums[0]}};
            else return {};
        }

        for(int i=0;i< nums.size()-3;i++){
           if(i>0 && nums[i]==nums[i-1])continue;
           if ((long long)nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;

            
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int k =j+1;
                int l=nums.size()-1;
                while(k<l){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum>target)l--;
                    else if(sum<target)k++;
                    else{
                        result.push_back({nums[i],nums[j],nums[k],nums[l]});
                      
                        while (k < l && nums[k] == nums[k + 1]) k++;
                        while (k < l && nums[l] == nums[l - 1]) l--;
                        k++;
                        l--;

                    }
                }
            }
        }
        

        return result;   
    }
};