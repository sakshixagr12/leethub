class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int j=0;
        int maxDis=0;
        for(int i =1;i<colors.size();i++){
            if(colors[i]!=colors[j]) {
                maxDis=max(maxDis,abs(i-j));
                
            }
        }
        int n = colors.size();
        for(int i =0; i<colors.size()-1;i++){
            if(colors[i]!=colors[n-1]){
                maxDis=max(maxDis,abs(n-1-i));
            }
        }
        return maxDis;
    }
};