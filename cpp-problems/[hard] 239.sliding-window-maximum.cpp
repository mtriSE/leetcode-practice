/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> maxRange;
        for(int i=0; i < nums.size(); ++i) {
            while(!q.empty() && nums[q.back()] <= nums[i]) q.pop_back();
            q.push_back(i);
            if (q.front() < i - k + 1) q.pop_front();
            if (i >= k - 1) maxRange.push_back(nums[q.front()]);
        }

        return maxRange;
    }
};
// @lc code=end

