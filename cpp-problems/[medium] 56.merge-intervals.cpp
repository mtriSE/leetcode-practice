/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> interval1, vector<int> interval2){
            return (interval1)[0] < (interval2)[0];
        });
        vector<vector<int>> answer;
        vector<int> prev = intervals[0];
        for (int i = 0; i<intervals.size(); i++) {
            vector<int> interval = intervals[i];
            if (prev[1] >= interval[0]) {
                prev[1] = max(prev[1], interval[1]);
            } else {
                answer.push_back(prev);
                prev = interval;
            }
        }

        answer.push_back(prev);

        return answer;
    }
};
// @lc code=end

