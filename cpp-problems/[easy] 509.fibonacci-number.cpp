/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
vector<int> F(31,-1);
class Solution {
public:

    int recur(int n) {
        // if(n == 0 || n == 1) return F[1];
        if(F[n] != -1) return F[n];
        F[n] = recur(n-1) + recur(n-2);
        return F[n];
    }

    int fib(int n) {
        F[0] = 0;
        F[1] = 1;
        return recur(n);
    }
};
// @lc code=end

