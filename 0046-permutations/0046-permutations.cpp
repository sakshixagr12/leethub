bool nextp(vector<int>&arr){
    int idx=-1;
    int n = arr.size();
    for(int i =n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(arr.begin(),arr.end());
        return false;
    }
    for(int k=n-1;k>=idx;k--){
        if(arr[k]>arr[idx]){
            swap(arr[k],arr[idx]);
            break;
        }
    }
    reverse(arr.begin()+idx+1,arr.end());
    return true;
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        do{
            ans.push_back(nums);
        }while(nextp(nums));
        return ans;
        
    }
};