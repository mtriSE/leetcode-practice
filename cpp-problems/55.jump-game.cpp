/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;
        if (nums.size() == 0 || nums[0] == 0) return false;
        int l=0, r=0;
        while (r < nums.size() - 1) {
            int farthest = 0;
            for (int i=l; i<=r; ++i) {
                farthest = farthest > i + nums[i] ? farthest : i + nums[i];
            }
            if (farthest < r) return false;
            l = r + 1;
            r = farthest;
        }
        return true;
    }
};
// @lc code=end

