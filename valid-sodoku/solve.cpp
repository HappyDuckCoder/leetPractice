#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        vector<vector<int>> rows(9, vector<int>(9, 0));
        vector<vector<int>> cols(9, vector<int>(9, 0));
        vector<vector<int>> boxes(9, vector<int>(9, 0));

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char c = board[i][j];

                // Skip empty cells
                if (c == '.')
                    continue;

                // Convert character to integer (1-based to 0-based index)
                int num = c - '1';

                // Calculate box index (0 to 8)
                int boxIndex = (i / 3) * 3 + (j / 3);

                // Check for duplicates
                if (rows[i][num]++ > 0 || cols[j][num]++ > 0 || boxes[boxIndex][num]++ > 0)
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution s;
    cout << s.isValidSudoku(board) << endl;

    return 0;
}