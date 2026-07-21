class Solution {
public:

    void func(int cnt,int k,int n , vector<vector<int>>&arr,vector<int>&ds){
        //n ->sum
        //k ->no of numbers

        if(k==0&&n==0){
            arr.push_back(ds);
            return;
        }
        if(n<0||k<0) return;
        for(int i=cnt;i<=9;i++){
            if(i>n)break;
            ds.push_back(i);
            func(i+1,k-1,n-i,arr,ds);
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