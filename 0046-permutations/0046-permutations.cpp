bool nextpermutations(vector<int>&nums){
    int idx=-1;
    int n= nums.size();
    for(int i = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return false;
    }
    for(int i = n-1;i>=idx;i--){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
            break;
        }
    }
    reverse(nums.begin()+idx+1,nums.end());
    return true;

}
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        do{
            ans.push_back(nums);
        }
        while(nextpermutations(nums));
    
    return ans;
}};