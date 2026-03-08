/*
 * @lc app=leetcode id=2326 lang=cpp
 *
 * [2326] Spiral Matrix IV
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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int rowStart=0, rowEnd=m-1;
        int colStart=0, colEnd=n-1;
        ListNode* curr = head;
        vector<vector<int>> matrix(m,vector<int>(n));

        while(rowStart <= rowEnd && colStart <= colEnd) {
            // left to right
            for(int j=colStart; j<=colEnd; ++j) {
                matrix[rowStart][j] = curr ? curr->val : -1;
                curr = curr ? curr->next : NULL;
            }
            rowStart++;

            // top to down
            for(int i=rowStart; i<=rowEnd; ++i) {
                matrix[i][colEnd] = curr ? curr->val : -1;
                curr = curr ? curr->next : NULL;
            }
            colEnd--;

            // right to left
            if (rowStart<=rowEnd){
                for(int j=colEnd; j>=colStart; --j) {
                    matrix[rowEnd][j] = curr ? curr->val : -1;
                    curr = curr ? curr->next : NULL;
                }
                rowEnd--;
            }

            if (colStart <= colEnd) {
                for(int i=rowEnd; i>=rowStart; --i) {
                    matrix[i][colStart] = curr ? curr->val : -1;
                    curr = curr ? curr->next : NULL;
                }
                colStart++;
            }
        }

        return matrix;
    }
};
// @lc code=end

