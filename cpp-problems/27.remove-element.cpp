/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator it = nums.begin();
        while(it != nums.end()) {
            if (*it == val) {
                nums.erase(it);
                // count++;
                // continue;
            } else {
                it++;
            }
        }
        return nums.size();
    }
};
// @lc code=end

