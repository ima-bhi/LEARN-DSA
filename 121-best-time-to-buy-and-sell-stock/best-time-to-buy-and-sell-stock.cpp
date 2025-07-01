class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //step 1: prefix sum like approach but store max diff
        int minm=prices[0],profit=0;
        // step 2: iterate over profit and find minm and max profit
        for(int i=1;i<prices.size();i++){
            // find minm
            minm=min(min(prices[i-1],prices[i]),minm);
            // profit
            profit=max((prices[i]-minm),profit);
        }
        return profit;
    }
};