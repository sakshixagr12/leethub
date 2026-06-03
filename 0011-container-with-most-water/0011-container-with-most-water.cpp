class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxArea=INT_MIN ,a;
        // int n=height.size();
        
        // return maxArea;
        int i=0 , j=height.size()-1,a;
        int maxArea=INT_MIN;

        while (i<j) {

            a = min(height[i],height[j])*(j-i);
            maxArea=max(a,maxArea);

            if(height[i]>height[j]){
                j--;

            }else{
                i++;
             }
        }

        return maxArea;
        
    }
};