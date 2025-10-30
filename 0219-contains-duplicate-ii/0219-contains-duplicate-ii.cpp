class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i =0;
      //  int j=i+1;
       for(int i=0; i<nums.size(); i++){
           int j=i+1,count=k;
            for(int j=i+1; j<=i+k; j++){
                if(j<nums.size() && nums[i]==nums[j])return 1;
            }
            
        }
      return false;  
    }
};