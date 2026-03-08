/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void LNR(TreeNode* root, vector<int>& arr) {
        if(root!=NULL) {
            LNR(root->left, arr);
            if (root != NULL) arr.push_back(root->val);
            LNR(root->right, arr);
        }
    }

    int getMinimumDifference(TreeNode* root) {
        if (root == NULL) return INT_MAX;
        vector<int> arr;
        LNR(root, arr);
        int res = INT_MAX;
        for (int i=0; i<arr.size() - 1; i++){
            res = min(res, abs(arr[i] - arr[i+1]));
        }
        return res;
    }
};
// @lc code=end

