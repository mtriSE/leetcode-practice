/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int profitRecur(vector<int>& prices, int index, int buy, vector<vector<int>>& dp) {
        if(index == prices.size()){
            return 0;
        }
        if (dp[index][buy] != -1) return dp[index][buy];
        int profit = 0;
        if(buy==1) {
            long int buyNow = -prices[index] + profitRecur(prices, index+1, 0,dp);
            long int buyLater = 0 + profitRecur(prices, index+1,1,dp);
            profit = buyNow < buyLater ? buyLater : buyNow;
        } else {
            long int sellNow = prices[index] + profitRecur(prices, index+1, 1,dp);
            long int sellLater = 0 + profitRecur(prices, index+1, 0,dp);
            profit = sellNow < sellLater ? sellLater : sellNow;
        }
        return dp[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return profitRecur(prices, 0, 1, dp);
    }
};
// @lc code=end

