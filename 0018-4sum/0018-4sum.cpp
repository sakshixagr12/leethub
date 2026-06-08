class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>>res; 
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if (n<4){
            return {};
        }
        // if(n==1){
        //     if(nums[0]==target) res.push_back({nums[0]});
        // }
        for(int i = 0 ; i < nums.size()-3 ; i++ ) {
            if(i > 0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            while (j < n-2) {
            //if (j>i && nums[j]==nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while ( k<l ) {
                    long long sum =  (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if ( sum == target) {
                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while ( k<l && nums[k] == nums[k-1]) k++;
                        while ( l>k && nums[l] == nums[l+1]) l--;
                    }
                    else if ( sum > target) l--;
                    else k++;
                }
                j++;
                while ( j < n-2 && nums[j]==nums[j-1]) j++;
            }
        }  
        return res;
    }
};