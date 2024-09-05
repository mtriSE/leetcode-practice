/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> answer;
        vector<string> board(n, string(n, '.'));
        solver(answer, board, 0, n);
        return answer;
    }

private:
    bool isValid(vector<string> &board, int row, int col, int n)
    {
        // int n = board.size();
        // check valid in vertical columns col
        for (int i = 0; i < row; ++i)
        {
            if (board[i][col] == 'Q')
                return false;
        }

        // check 135 degree diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        {
            if (board[i][j] == 'Q')
                return false;
        }

        // check 45 degree diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
        {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void solver(vector<vector<string>> &answer, vector<string> &board, int row, int n)
    {
        if (row >= board.size())
        {
            answer.push_back(board);
            return;
        }

        for (int col = 0; col < n; ++col)
        {
            if (isValid(board, row, col, n))
            {
                board[row][col] = 'Q';
                solver(answer, board, row + 1, n);
                board[row][col] = '.';
            }
            
        }
    }
};
// @lc code=end
