/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if (nums.size() == 0) return answer;
        int left = 0, right = 0;
        while(right < nums.size()) {
            if (left == right) {
                right++;
                continue;
            }
            if (nums[right] == nums[right-1] + 1) {
                right++;
                continue;
            }
            if ((nums[right] > nums[right-1] + 1)) {
                if(left == right - 1) {
                    answer.push_back(to_string(nums[left]));
                } else {
                    answer.push_back(to_string(nums[left]) + "->" + to_string(nums[right-1]));
                }
                left = right;
            }
        }

        if(left == right - 1) {
            answer.push_back(to_string(nums[left]));
        } else {
            answer.push_back(to_string(nums[left]) + "->" + to_string(nums[right-1]));
        }

        return answer;
        
    }
};
// @lc code=end

