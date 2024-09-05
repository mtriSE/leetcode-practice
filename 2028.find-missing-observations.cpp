/*
 * @lc app=leetcode id=2028 lang=cpp
 *
 * [2028] Find Missing Observations
 */

// @lc code=start
class Solution {
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        vector<int> answer;
        int m = rolls.size();
        long int rhs = mean * (m + n) - accumulate(rolls.begin(), rolls.end(), 0);

        if ( rhs <= 6*n && rhs >= n) {
            int distributedMean = rhs / n;
            int remainingSum = rhs % n;
            vector<int> answer(n,distributedMean);
            int i=0;
            while(remainingSum > 0) {
                remainingSum--;
                answer[i]++;
                i++;
                i=i%n;
            }
            return answer;
        }

        return answer;
    }
};
// @lc code=end
