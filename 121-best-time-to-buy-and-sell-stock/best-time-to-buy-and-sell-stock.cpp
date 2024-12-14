class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int max_sum=0;
    int profit=0;
    int low=prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>low){
            profit=prices[i]-low;
            max_sum=max(profit,max_sum);
        }
        else{
            low=prices[i];
        }
    }
    return max_sum;
    }
};