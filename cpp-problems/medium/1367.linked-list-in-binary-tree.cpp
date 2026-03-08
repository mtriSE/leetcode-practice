/*
 * @lc app=leetcode id=1367 lang=cpp
 *
 * [1367] Linked List in Binary Tree
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        ListNode* cur = head;
        return search(head,cur,root);
    }

    bool search(ListNode* head, ListNode* cur, TreeNode* root) {
        if (cur == nullptr) return true;
        if (root ==nullptr) return false;
        if (cur->val == root->val) {
            cur = cur->next;
        } else if (head->val == root->val) {
            head = head->next;
        } else {
            cur = head;
        }

        return search(head,cur, root->left) || search(head,cur, root->right);
    }
};
// @lc code=end

