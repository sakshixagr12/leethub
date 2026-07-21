class Solution {
public:
    
    int qs(vector<int>&arr,int low,int high){
        int i = low;
        int j= high;
        int pivot=arr[low];

        while(i<j){
            while(arr[i]<=pivot&&i<=high-1)i++;
            while(arr[j]>pivot&&j>=low+1)j--;
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[j],arr[low]);
        return j;
    }
    void quickSort( vector<int>&arr,int low,int high ){
        if(low<high){
            int pIdx=qs(arr,low,high);
            quickSort(arr,low,pIdx-1);//divide left portion
            quickSort(arr,pIdx+1,high);
    }

}
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        return nums;
    }
};