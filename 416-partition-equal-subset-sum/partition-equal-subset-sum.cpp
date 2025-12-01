class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum & 1) return false;
        int W=sum/2;
        int n=nums.size();
        vector<bool>dp(W+1,false);
        dp[0]=true;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=W;j-nums[i]>=0;j--) dp[j]=dp[j] || dp[j-nums[i]];    
        }
        return dp[W];
    }
};