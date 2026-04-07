class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n==0) return 0;
        int i =0,j=n-1;
        int lmax=height[0],rmax=height[n-1],water=0;
        while(i<=j){
            lmax=max(lmax,height[i]);
            rmax=max(rmax,height[j]);
            if(lmax>=rmax){
                water+=(rmax-height[j]);
                j--;
            }else {
                water+=(lmax-height[i]);
                i++;
            }
           
        }
        return water;
        
    }
};