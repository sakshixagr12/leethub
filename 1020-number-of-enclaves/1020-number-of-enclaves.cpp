class Solution {
public:

    void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int r, int c)
    {
        int n = grid.size();
        int m = grid[0].size();

        if(r<0 || r>=n || c<0 || c>=m || grid[r][c] == 0 || vis[r][c] == 1)
        {
            // if( )
            return;
        }
        vis[r][c] = 1;
        dfs(grid, vis, r+1, c);
        dfs(grid, vis, r-1, c);
        dfs(grid, vis, r, c-1);
        dfs(grid, vis, r, c+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));

        // first and last row
        for(int j=0; j<m; j++)
        {
            if(grid[0][j]==1)
            dfs(grid,vis,0,j);
            if(grid[n-1][j]==1)
            dfs(grid,vis,n-1,j);
        }

        for(int i=0; i<n; i++)
        {
            if (grid[i][0]==1)
            dfs(grid, vis, i, 0);
            if (grid[i][m-1] == 1)
            dfs (grid, vis, i, m-1);
        }

        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                cnt++;
            }
        }
        return cnt;
    }
};