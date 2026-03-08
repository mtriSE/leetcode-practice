/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> rows[9];
        unordered_set<int> cols[9];
        unordered_set<int> boxs[9];
        for(int i = 0; i<board.size(); ++i) {
            for(int j = 0; j<board[i].size(); ++j) {
                if (board[i][j] == '.') {
                    continue;
                }

                int box_index = (j / 3) + (i / 3)*3;

                char value = board[i][j];

                if (rows[i].count(value) || cols[j].count(value) || boxs[box_index].count(value)) {
                    return false;
                }

                rows[i].insert(value);
                cols[j].insert(value);
                boxs[box_index].insert(value);
            }
        }
        return true;
    }
};
// @lc code=end

