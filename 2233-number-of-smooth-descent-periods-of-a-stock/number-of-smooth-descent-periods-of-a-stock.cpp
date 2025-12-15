class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res=1,count=1;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]==prices[i+1]+1){
                count++;
                res+=count;
            }
            else{
                count=1;
                res+=count;
            }
        }
        return res;
    }
};