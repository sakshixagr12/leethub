class Solution {
public:

    void dfs(vector<vector<int>>& isConnected,int& idx,int n,vector<int>&v){
        v[idx]=1;
        for(int i=0;i<n;i++){
            if(v[i]==0 && isConnected[idx][i]==1){
                dfs(isConnected,i,n,v);
            } 
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>v(n,0);
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(v[i]==0) {
                ans ++;
                dfs(isConnected,i,n,v);
            }
        }
        return ans;
    }
};