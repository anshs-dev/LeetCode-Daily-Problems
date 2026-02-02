class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string res=s;
        reverse(res.begin(),res.end());
        vector<vector<int>> dp(s.length()+1,vector<int>(s.length()+1,0));
        for(int i=1;i<=s.length();i++){
            for(int j=1;j<=s.length();j++){
                if(res[i-1]==s[j-1]) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[s.length()][s.length()];
    }
};