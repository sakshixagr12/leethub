class Solution {
public:

    void dfs(vector<vector<char>>& board, vector<vector<int>>& vis, int sr, int sc)
    {
        int n = board.size();
        int m = board[0].size();

        if (sr<0 || sr>=n || sc<0 || sc>=m || board[sr][sc]!='O' || vis[sr][sc] == 1){
            return;
        }
        vis[sr][sc] = 1;

        dfs(board, vis, sr+1, sc);
        dfs(board, vis, sr-1, sc);
        dfs(board, vis, sr, sc+1);
        dfs(board, vis, sr, sc-1);

        // for (char c : board[])
    }
    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));

        // 1. first & last row

        for(int j=0; j<m; j++)
        {
            if(board[0][j]=='O')
                dfs(board, vis, 0, j);
            if(board[n-1][j]=='O')
                dfs(board, vis, n-1, j);
        }

        // 2. first & last column

        for(int i=0; i<n; i++)
        {
            if(board[i][0]=='O')
                dfs(board,vis,i,0);
            if(board[i][m-1]=='O')
                dfs(board,vis,i,m-1);
        }

        // internal O's
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]=='O' && vis[i][j]==0)
                {
                    board[i][j]='X';
                    vis[i][j]=1;
                }
                
            }
        }
    }
};