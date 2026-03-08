/*
 * @lc app=leetcode id=1684 lang=cpp
 *
 * [1684] Count the Number of Consistent Strings
 */

// @lc code=start
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s_c_hash;
        for(auto c : allowed){
            s_c_hash.insert(c);
        }
        int count = 0;
        for(auto word : words) {
            bool valid = true;
            for(auto c : word) {
                if (s_c_hash.find(c) == s_c_hash.end()) {
                    valid = false;
                    break;
                }
            }
            if (valid) count++;
        }
        return count;
    }
};
// @lc code=end

