#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int total = 0;
        int rowSize = grid.size();
        int colSize = grid[0].size();
        
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                if (grid[i][j] == 1) {
                    if (j == 0 || grid[i][j - 1] == 0)
                        total++;
                    if (j == colSize - 1 || grid[i][j + 1] == 0)
                        total++;
                    if (i == 0 || grid[i - 1][j] == 0)
                        total++;
                    if (i == rowSize - 1 || grid[i + 1][j] == 0)
                        total++;
                }
            }
        }
        return total;
    }
};

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }
    
    Solution sol;
    cout << sol.islandPerimeter(grid) << endl;

    return 0;
}
