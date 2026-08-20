class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mmin=prices[0];
        int profit =0;
        for(auto x:prices) {
            int prof = x-mmin;
            profit = max(profit,prof);
            mmin = min(mmin,x);
        }
        return profit;
    }
};