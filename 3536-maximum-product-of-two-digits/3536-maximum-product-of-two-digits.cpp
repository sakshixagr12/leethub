class Solution {
public:
    int maxProduct(int n) {
        int maxprod=INT_MIN;
        int prod=1;
        int temp=n;
        vector<int>arr;
        while(temp!=0){
            arr.push_back(temp%10);
            temp=temp/10;
        }
        sort(arr.begin(),arr.end());
        int n1 = arr.size();
        return arr[n1-1]*arr[n1-2];
    }
};