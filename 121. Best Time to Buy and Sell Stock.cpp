class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int mprice = prices[0];

        for(auto i = prices.begin()+1; i<prices.end(); i++){
            if(*i-mprice > maxprofit)
                maxprofit = *i - mprice;

            if( *i < mprice)
                mprice = *i;
        }
        return maxprofit;
        
    }
};
