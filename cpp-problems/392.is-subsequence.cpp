/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        string::iterator is = s.begin();
        string::iterator it = t.begin();
        while (it != t.end()) {
            if(is == s.end()) return true;
            if(*it == *is){
                is++;
            }
            it++;
        }
        return is == s.end() ? true : false;
    }
};
// @lc code=end

