class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // int row=sizeof(mat)/sizeof(mat[0]);
        // int col=sizeof(mat[0])/sizeof(mat[0][0]);
        int row=mat.size();
        int col=mat[0].size();
        if(r*c != row*col) return mat;
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i =0;i<row*col;i++){
            ans[i/c][i%c]=mat[i/col][i%col];
        }
        return ans;
        
    }
};