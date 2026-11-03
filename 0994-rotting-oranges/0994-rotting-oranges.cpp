class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int> (m,0));
        queue<pair<pair<int,int>,int>> q;

        int fresh = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                    vis [i][j] = 1;
                }
                else if (grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }

        if ( fresh == 0)
        {
            return 0;
        }

        int max_time = -1;
        int infected  = 0;
        while (!q.empty())
        {
            auto coordinate = q.front().first;
            int time = q.front().second;

            max_time = max( max_time, time);

            int x_cord = coordinate.first;
            int y_cord = coordinate.second;
            q.pop();

            int delrow[] = {-1, 0, 1, 0};
            int delcol[] = {0, -1, 0, 1};

            for (int i=0; i<4; i++)
            {
                int nrow = x_cord + delrow[i];
                int ncol = y_cord + delcol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1 )
                {
                    vis[nrow][ncol] = 1;
                    q.push({{nrow, ncol}, time + 1});
                    infected ++;
                }
            }
        }
        if ( infected != fresh) return -1;

        return max_time;
    }
};