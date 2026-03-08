#
# @lc app=leetcode id=746 lang=python3
#
# [746] Min Cost Climbing Stairs
#

# @lc code=start
class Solution:

    def doJump(self, cost: List[int], cur: int, n: int, dp: List[int]) -> int:
        if cur == n-1: return cost[n-1]
        if cur >= n: return 0
        if dp[cur] != -1: return dp[cur]
        jump1step = cost[cur] + self.doJump(cost, cur+1, n, dp)
        jump2steps = cost[cur] + self.doJump(cost, cur+2, n, dp)
        dp[cur] = min(jump1step, jump2steps)
        return dp[cur]

    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp = [-1 for i in range(len(cost))]
        return min( self.doJump(cost, 0, len(cost), dp),
                    self.doJump(cost, 1, len(cost), dp)
        )
# @lc code=end

