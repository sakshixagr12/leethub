class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0 ; i < grid.size() ; i++) {
            for (int j = 0 ;j < grid[i].size() ; j++) {
                sort( grid[i].begin(),grid[i].end());
                if ( grid[i][j] >=0) break;
                else count++;
            }
        }
        return count ;
    }
};