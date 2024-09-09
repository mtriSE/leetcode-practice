#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        lastSeen = {}
        left = 0
        right = 0
        maxLength = 0
        while right < len(s):
            # has been seen, update left pointer
            if s[right] in lastSeen and lastSeen[s[right]] >= left:
                left = lastSeen[s[right]]+1
            else:
                maxLength = max(maxLength, right - left + 1)
            lastSeen[s[right]] = right
            right += 1

        return maxLength
# @lc code=end
