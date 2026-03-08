/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;
     
        vector<int>::iterator l = numbers.begin();
        vector<int>::iterator r = numbers.end()-1;
        while(l<r){
            if(*l + *r < target) {
                l++;
            } else if (*l + *r > target){
                r--;
            } else {
                answer.push_back(l-numbers.begin()+1);
                answer.push_back(r-numbers.begin()+1);
                break;
            }
        }
        return answer;
    }
};
// @lc code=end

