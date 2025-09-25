class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp;
        int n=triangle.size();
        for(int i=0;i<n;i++) dp.push_back(vector<int>(triangle[i].size(),0));
        for(int i=0;i<triangle[n-1].size();i++) dp[n-1][i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++) dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
        }
        return dp[0][0];
    }
};