class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(auto i=0; i<n; i++){
            for(auto j=0; j<m; j++){
                if(matrix[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }
};



