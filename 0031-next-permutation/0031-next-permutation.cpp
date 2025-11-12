class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(next_permutation(nums.begin(),nums.end())==false){
        sort(nums.begin(),nums.end());
        }
        
        for(auto i : nums){
            cout<<i<<" ";
        }
        
    }
};