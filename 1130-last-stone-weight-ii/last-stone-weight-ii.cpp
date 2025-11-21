class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=accumulate(stones.begin(),stones.end(),0);
        int target=sum/2;
        vector<bool>dp(sum,false);
        dp[0]=true;
        for(int w:stones) for(int i=sum;i>=w;i--) dp[i]=dp[i] || dp[i-w];
        for(int i=target;i>=0;i--) if(dp[i]) return sum-2*i;
        return 0;
    }
};