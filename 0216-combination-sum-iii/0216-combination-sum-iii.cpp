class Solution {
public:

    void func(int i,int k,int n ,vector<vector<int>>&ans,vector<int>&ds){
        if(k==0&&n==0){
            ans.push_back(ds);
            return;
        }
        if(k<0) return;
        if(n<0) return;
        for(int cnt = i;cnt <= 9;cnt++){
            if(cnt>n)break;
            ds.push_back(cnt);
            func(cnt+1,k-1,n-cnt,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>>ans;
       vector<int>ds;
       func(1,k,n,ans,ds);
       return ans; 
    }
};