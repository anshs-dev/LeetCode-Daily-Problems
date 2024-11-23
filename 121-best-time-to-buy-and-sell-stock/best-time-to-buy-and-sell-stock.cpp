class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=prices[0];
        int profit=0;
        int max_profit=0;
        for(int i=1;i<prices.size();i++){
        if(prices[i]>low){
        profit=prices[i]-low;
        max_profit=std::max(profit,max_profit);
        }
        else{
            low=prices[i];
        }
        }
        return max_profit;
    }
};