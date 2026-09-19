class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int max_profit=0;
        for(int p:prices){
            if(p<min){
                min= p;
            }
           int  profit= p-min;
            if(profit>max_profit){
max_profit= profit;
            }
        }
        return max_profit;
    }
};
