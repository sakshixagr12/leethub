class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map <int,int> mpp;
        for ( int x : nums) {
            if (x%2==0) {
                mpp[x]++;
            }
        }
        if ( mpp.empty()) {
            return -1;
        }
        int maxFreq=-1;
        for (auto it : mpp) {
            maxFreq = max ( maxFreq, it.second);
        }
        int el = INT_MAX;
        for (auto it :mpp) {
            if (it.second == maxFreq) {
                el = min (el , it.first);
            }
        }
        return el;
    }
};