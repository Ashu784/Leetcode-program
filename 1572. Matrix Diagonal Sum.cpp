class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int left = 0;
        for(auto i = 0; i<n; i++) {
            left += mat[i][i];
            left += mat[i][n-i-1];
        }
        if (n % 2 != 0) {
            int mid = n / 2;
            left -= mat[mid][mid];
        }
        return left;
    }
};
