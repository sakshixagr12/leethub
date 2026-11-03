class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int r, int c)
    {
        vis[r][c] = 1;
        queue<pair<int,int>> q;
        q.push({r,c});

        int n = grid.size();
        int m = grid[0].size();

        int delrow[] = {-1, 1, 0, 0};
        int delcol[] = {0, 0, -1, 1};

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // for(int i=-1; i<=1; i++)
            // {
            //     for(int j=-1; j<=1; j++)
            //     {
            for (int i = 0; i < 4; i++)
            {
                    int row = r + delrow[i];
                    int col = c + delcol[i];
                    if ((row >= 0 && row < n) && (col >= 0 && col < m) && vis[row][col] == 0 && grid[row][col] == '1')
                    {
                        vis[row][col] = 1;
                        q.push({row,col});
                    }
                }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));

        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j]== '1')
                {
                    ans++;
                    bfs (grid, vis, i, j);
                }
            }
        }
        return ans;
    }
};