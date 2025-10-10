class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        if(n==0) return 0;
        vector<int>dp=energy;
        for(int i=n-1-k;i>=0;--i) dp[i]+=dp[i+k];
        int ans=dp[0];
        for(int x:dp) ans=max(ans,x);
        return ans;
    }
};
