class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        if(sum & 1) return false;
        int W=sum/2;
        vector<vector<bool>>dp(n+1,vector<bool>(W+1,false));
        for(int i=0;i<=n;i++) dp[i][0]=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=W;j++){
                if(j-nums[i-1]>=0) dp[i][j]=dp[i-1][j-nums[i-1]];
                dp[i][j]=dp[i][j] || dp[i-1][j];
            }
        }
        return dp[n][W];
    }
};