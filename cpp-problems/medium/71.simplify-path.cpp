/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stack<string> rst;
        string result;
        stringstream ss(path);
        string x;
        while(getline(ss, x, '/')) {
            if (x == "." || x == "" || (x == ".." && st.empty())) continue;
            else if (x == ".." && !st.empty()) {
                st.pop();
                continue;
            }
            st.push(x);
        }
        if (st.empty()) {
            result += "/";
        }
        while(!st.empty()) {
            rst.push(st.top());
            st.pop();
        }
        while(!rst.empty()) {
            result.append("/" + rst.top());
            rst.pop();
        }
        return result;
    }
};
// @lc code=end

