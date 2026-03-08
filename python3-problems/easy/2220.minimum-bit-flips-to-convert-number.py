#
# @lc app=leetcode id=2220 lang=python3
#
# [2220] Minimum Bit Flips to Convert Number
#

# @lc code=start
class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        # get the different bits by XOR then count number of 1s
        xorResult = str(bin(start^goal))[2:] 
        return xorResult.count('1')
# @lc code=end

