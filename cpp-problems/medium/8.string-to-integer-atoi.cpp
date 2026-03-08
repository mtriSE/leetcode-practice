/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        auto c = s.begin();
        int sign = 1;
        long result = 0;
        while (*c == ' ')
            c++;
        if (*c == '-') {
            sign = -1;
            c++;
        } else if (*c == '+') {
            c++;
        }
        while (c != s.end()) {
            if (*c >= '0' && *c <= '9') {
                result = result * 10 + (*c - '0');
                if (result * sign > INT_MAX)
                    return INT_MAX;
                if (result * sign < INT_MIN)
                    return INT_MIN;
                c++;
            } else {
                break;
            }
        }

        return (int)(result * sign);
    }
};
// @lc code=end

