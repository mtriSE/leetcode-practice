/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int min_buy = INT_MAX;
        int max_profit = 0;

        for (int i=0; i<prices.size(); ++i) {
            if (min_buy>prices[i]) {
                min_buy = prices[i];
            } else if (prices[i] - min_buy > max_profit) {
                max_profit = prices[i] - min_buy;
            }
        }
        return max_profit;
    }
};
// @lc code=end

