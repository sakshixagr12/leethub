class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],profit=0;
        for(auto it:prices){
            int cost=it-mini;
            profit=max(profit,cost);
            mini=min(mini,it);
        }
        return profit;
    }
};