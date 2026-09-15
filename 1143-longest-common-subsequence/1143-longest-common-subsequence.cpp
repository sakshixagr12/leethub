class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        return solve(text1, text2, m, n);
    }

    int solve(string& s1, string& s2, int& m, int& n) {
        // 2d dp array
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for (int i=1; i<=m; i++) 
        {
            for (int j=1; j<=n; j++)
            {
                if (s1[i-1] == s2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    int opt1 = dp[i-1][j];
                    int opt2 = dp[i][j-1];
                    dp[i][j] = max(opt1, opt2);
                }
            }
        }
        return dp[m][n];
    }
};