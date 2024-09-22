/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.size() == 1)
            return stoi(tokens[0]);
        stack<int> st;
        unordered_set<string> operators({"+", "-", "*", "/"});
        vector<string>::iterator pointer = tokens.begin();
        while (pointer != tokens.end()) {
            if (operators.find(*pointer) == operators.end()) {
                st.push(stoi(*pointer));
            } else {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();

                if (*pointer == "+") {
                    first = first + second;
                } else if (*pointer == "-") {
                    first = first - second;
                } else if (*pointer == "*") {
                    first = first * second;
                } else if (*pointer == "/") {
                    first = first / second;
                }

                st.push(first);
            }

            pointer++;
        }
        return st.top();
    }
};
// @lc code=end

