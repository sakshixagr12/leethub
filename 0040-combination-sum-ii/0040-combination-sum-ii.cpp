class Solution {
public:

    void func(int idx,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i = idx;i<arr.size();i++){
            //skip duplicates
            if(i>idx&&arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            
            ds.push_back(arr[i]);
            func(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        func(0,target,candidates,ans,ds);
        return ans;
    }
};