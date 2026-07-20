class Solution {
public:

    void findComb(int  idx,int k,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr){
        if(idx==arr.size()){
            if(k==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[idx]<=k){
            ds.push_back(arr[idx]);
            findComb(idx,k-arr[idx],ans,ds,arr);
            ds.pop_back();
        }
        findComb(idx+1,k,ans,ds,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findComb(0,target,ans,ds,candidates);
        return ans;
    }
};