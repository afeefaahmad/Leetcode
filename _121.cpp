// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int min_price = INT_MAX;
        for(int i=0; i<prices.size();i++)
        {
        min_price = min(prices[i], min_price);
        profit = max(prices[i]-min_price ,profit);
        }
       return profit;
    }
};
