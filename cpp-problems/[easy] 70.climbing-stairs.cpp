/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int a = 0;
        int b = 1;
        int res = a + b;
        for(int i=1; i<n; ++i) {
            a = b;
            b = res;
            res = a + b;
        }
        return res;
    }
};
// @lc code=end

