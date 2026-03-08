#
# @lc app=leetcode id=1137 lang=python3
#
# [1137] N-th Tribonacci Number
#

# @lc code=start
dp = [-1 for i in range(38)]
dp[0], dp[1], dp[2] = 0, 1, 1

class Solution:
    def tribonacci(self, n: int) -> int:
        if(dp[n] != -1): return dp[n]
        dp[n] = self.tribonacci(n-3) + self.tribonacci(n-2) + self.tribonacci(n-1)
        return dp[n]
# @lc code=end

