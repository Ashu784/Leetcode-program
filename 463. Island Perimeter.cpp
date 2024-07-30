class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        total=0;
        for i=0; i<rowSize;i++
            for j=0; j<colSize;j++
            if grid[i][j]==1
            {
                //check left column
                if j==0 || grid[i][j-1]==0
                   total++
                //check right column
                if j==grid[i].size()-1 || grid[i][j+1]=0
                   total++
                //check top column
                if i==0 || grid[i-1][j]==0
                    total++
                //check bottom column
                if i== grid.size()-1 || +grid[i+1][j]==0
                    total++

            }
