/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        stack<TreeNode*> evenSt;
        stack<TreeNode*> oddSt;

        if (root != NULL) {
            evenSt.push(root);

            // pause only all two stack is empty
            while(!evenSt.empty() || !oddSt.empty()) {
                vector<int> temp;
                while(!evenSt.empty()) {
                    TreeNode* node = evenSt.top();
                    evenSt.pop();
                    temp.push_back(node->val);
                    if (node->left) oddSt.push(node->left);
                    if (node->right) oddSt.push(node->right);
                }
                if (!temp.empty()) answer.push_back(temp);
                temp.clear();
                while(!oddSt.empty()) {
                    TreeNode* node = oddSt.top();
                    oddSt.pop();
                    temp.push_back(node->val);
                    if (node->right) evenSt.push(node->right);
                    if (node->left) evenSt.push(node->left);
                }
                if (!temp.empty()) answer.push_back(temp);
            }
        }
        return answer;
    }
};
// @lc code=end

