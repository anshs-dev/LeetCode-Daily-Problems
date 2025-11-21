class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=accumulate(stones.begin(),stones.end(),0);
        int target=sum/2,m=stones.size();
        vector<vector<bool>>dp(m+1,vector<bool>(target+1,false));
        dp[0][0]=true;
        for(int i=1;i<=m;i++){
            for(int j=0;j<=target;j++){ 
                dp[i][j]=dp[i-1][j];
                if(j>=stones[i-1])
                dp[i][j]=dp[i][j] || dp[i-1][j-stones[i-1]];
            }
        }
        for(int j=target;j>=0;j--) if(dp[m][j]) return sum-2*j;
        return 0;
    }
};