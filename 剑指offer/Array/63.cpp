class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost=INT_MAX,profit=0;
        for(int i=0; i<prices.size(); i++){
            cost=min(cost,prices[i]);
            profit=max(profit,prices[i]-cost);
        }
        return profit;
    }
};
