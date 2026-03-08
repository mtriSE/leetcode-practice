/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    void doTraverse(TreeNode* node, vector<int>& answer, int level) {
        if (node==NULL) return;
        if (level >= answer.size()) {
            answer.push_back(node->val);
        }
        doTraverse(node->right, answer, level+1);
        doTraverse(node->left, answer, level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        doTraverse(root, answer, 0);
        return answer;
    }
};
// @lc code=end

