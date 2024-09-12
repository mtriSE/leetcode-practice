/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> hashTable;
        for(auto c : magazine) {
                hashTable[c]++;
        }
        for(auto c : ransomNote){
            if(hashTable[c] <= 0) return false;
            hashTable[c]--;
        }
        return true;
    }
};
// @lc code=end

