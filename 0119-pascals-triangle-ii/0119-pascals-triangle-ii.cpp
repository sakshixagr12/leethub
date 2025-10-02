class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        v.push_back({1});

        for(int i=1 ;i<= rowIndex;i++){
            vector<int>r;
            r.push_back(1);
            for(int j=1;j<i;j++){
                r.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            r.push_back(1);
            v.push_back(r);
        }
        return v[rowIndex];
        
    }
};