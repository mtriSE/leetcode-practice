/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxValue = -1;
        // int width = height.size() - 1;
        // vector<int>::iterator left;
        // vector<int>::iterator right;

        // for (; width >= 1; width--) {
        //     left=height.begin();
        //     right=left+width;
        //     while(right != height.end()) {
        //         int area = min(*left,*right) * width;
        //         maxValue = max(maxValue, area);
        //         right++;
        //         left++;
        //     }
        // }
        // return maxValue;

        vector<int>::iterator left = height.begin();
        vector<int>::iterator right = height.end()-1;
        int answer = 0;
        while(left < right){
            int area = min(*left,*right) * (right-left);
            answer = max(answer,area);
            if (*left < *right){
                left++;
            } else if (*left > *right) {
                right--;
            } else {
                left++;
                right--;
            }
        }
        return answer;
    }
};
// @lc code=end

