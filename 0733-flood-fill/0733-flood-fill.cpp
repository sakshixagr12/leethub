class Solution {
public:

    void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int color, int delRow[], int delCol[], int inicolor)
    {
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();

        for(int i=0; i<4; i++)
        {
            int r = row + delRow[i];
            int c = col + delCol[i];

            if (r >= 0 && r < n && c >= 0 && c < m && image[r][c]==inicolor && ans[r][c] != color)
            {
                dfs(r, c, ans, image, color, delRow, delCol, inicolor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];
        vector<vector<int>> ans = image;

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        dfs(sr, sc, ans, image, color, delRow, delCol, inicolor);
        return ans;
    }
};