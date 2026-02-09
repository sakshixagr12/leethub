class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxm=-1;
        int n = arr.size();
        //if(n==1) return vector<int>{-1};
        for(int i=n-1;i>=0;i--){
           int curr=arr[i];
           arr[i]=maxm;
           maxm=max(maxm,curr);
        }
        //arr[n-1]=-1;
        return arr;
        
    }
};