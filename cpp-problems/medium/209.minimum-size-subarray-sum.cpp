/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int ans=INT_MAX;
        while(r<nums.size()) {
            sum+=nums[r];
            while(sum>=target){
                sum-=nums[l];
                ans = min(ans,r-l+1);
                l++;
            }
            r++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
// @lc code=end

