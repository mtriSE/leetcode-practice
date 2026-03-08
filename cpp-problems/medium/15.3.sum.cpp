/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> tempAnswer;
    
        for(int mid = 0; mid < nums.size(); ++mid){
            int left = mid-1;
            int right = mid+1;
            while(left>=0 && right<nums.size()) {
                int total = nums[left] + nums[mid] + nums[right];
                if(total == 0) {
                    vector<int> result = {nums[left],nums[mid],nums[right]};
                    tempAnswer.insert(result);
                    left--;
                    right++;
                } else if (total < 0) {
                    right++;
                } else {
                    left--;
                }
            }
        }
        vector<vector<int>> answer(tempAnswer.begin(), tempAnswer.end());
        return answer;
    }
};
// @lc code=end

