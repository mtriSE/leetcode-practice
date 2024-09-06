/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator i = nums.begin()+1;
        while(i != nums.end()){
            if (*(i-1) ==*i){
                nums.erase(i);
                continue;
            }
            i++;
        }
        return nums.size();
    }
};
// @lc code=end

