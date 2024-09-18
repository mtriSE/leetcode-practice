/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        string::iterator i = s.begin();
        while(i < s.end()) {
            if (*i == '(' || *i == '[' || *i == '{') {
                st.push(*i);
            } else {
                if (st.empty()) return false;
                if (*i - st.top() == 1 || *i - st.top() == 2) {
                    st.pop();
                } else {
                    return false;
                }
            }
            i++;
        }
        return st.empty() ? true : false;
    }
};
// @lc code=end

