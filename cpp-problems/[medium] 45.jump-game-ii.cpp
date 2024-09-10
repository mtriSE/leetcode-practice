/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int doJump(vector<int>& nums, int cur, int n, vector<int>& dp){
        if(cur >= n - 1) return 0;
        if(dp[cur] != -1) return dp[cur];
        int minStep = INT_MAX-1;
        for(int step = nums[cur]; step > 0; --step) {
            minStep = min(minStep, 1 + doJump(nums, cur + step, n, dp));
        }
        return dp[cur] = minStep;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return doJump(nums, 0, nums.size(), dp);
    }
};
// @lc code=end

