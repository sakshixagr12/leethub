class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int i=0;
        while(i<4){
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(mat[i][j],mat[i][n-1-j]);
            }
        }
        if(mat==target) return true;
        else i++;
        }
        return false;  
    }
};