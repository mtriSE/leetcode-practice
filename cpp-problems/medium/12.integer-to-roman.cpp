/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    const std::vector<std::pair<int, std::string>> kSym {
        {1000,  "M"},
        {900,   "CM"},
        {500,   "D"},
        {400,   "CD"},
        {100,   "C"},
        {90,    "XC"},
        {50,    "L"},
        {40,    "XL"},
        {10,    "X"},
        {9,     "IX"},
        {5,     "V"},
        {4,     "IV"},
        {1,     "I"},
    };

    string intToRoman(int num) {
        std::string res{};
        for(auto [k, v] : kSym) {
            while ( num / k ) {
                res += v;
                num -= k; 
            }
        }
        return res;
    }
};
// @lc code=end

