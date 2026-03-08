/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> answer;
        if (root != NULL) {
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
            while(q.front() != NULL) {
                long int sum = 0;
                int node = 0;
                while(q.front() != NULL) {
                    sum += q.front()->val;
                    node++;
                    TreeNode* cur = q.front();
                    q.pop();
                    if (cur->left) q.push(cur->left);
                    if (cur->right) q.push(cur->right);
                }
                q.pop();
                q.push(NULL);
                answer.push_back(sum * 1.0 / node);
            }
        }
        return answer;
    }
};
// @lc code=end

