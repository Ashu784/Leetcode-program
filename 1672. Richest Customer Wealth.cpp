class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int wealth = 0;
        for(auto i =0; i<n; i++){
            int c_wealth = 0;
            for(auto j=0; j<m; j++){
                c_wealth += accounts[i][j];

            }
            wealth = max(c_wealth,  wealth);
        }
    return wealth; 
    }
};
