#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {

        int m = isWater.size();
        int n = isWater[0].size();

        // Initialize the height matrix with -1 (unprocessed cells)
        vector<vector<int>> res(m, vector<int>(n, -1));

        queue<pair<int, int>> qu;

        // Add all water cells to the queue and set their height to 0
        for (int x = 0; x < m; x++)
        {
            for (int y = 0; y < n; y++)
            {
                if (isWater[x][y])
                {
                    qu.push({x, y});
                    res[x][y] = 0;
                }
            }
        }

        // Initial height for land cells adjacent to water
        int heightOfNextLayer = 1;

        while (!qu.empty())
        {
            int level = qu.size();

            // Iterate through all cells in the current layer
            for (int i = 0; i < level; i++)
            {
                pair<int, int> currentCell = qu.front();
                qu.pop();

                // Check all four possible directions for neighboring cells
                for (int d = 0; d < 4; d++)
                {
                    pair<int, int> neighborCell = {currentCell.first + dx[d],
                                                   currentCell.second + dy[d]};

                    // Check if the neighbor is valid and unprocessed
                    if (isValidCell(neighborCell, m, n) &&
                        res[neighborCell.first][neighborCell.second] ==
                            -1)
                    {
                        res[neighborCell.first][neighborCell.second] =
                            heightOfNextLayer;
                        qu.push(neighborCell);
                    }
                }
            }
            heightOfNextLayer++; // Increment height for the next layer
        }

        return res;
    }

private:
    // Function to check if a cell is within the grid boundaries
    bool isValidCell(pair<int, int> cell, int m, int n)
    {
        return cell.first >= 0 && cell.second >= 0 && cell.first < m &&
               cell.second < n;
    }
};

int main()
{

    vector<vector<int>> isWater = {{0, 1}, {0, 0}};

    Solution s;

    vector<vector<int>> res = s.highestPeak(isWater);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}