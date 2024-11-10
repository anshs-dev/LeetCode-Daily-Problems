class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        
        // DP table to store match results for each combination of s and p prefixes
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Empty pattern matches empty string
        dp[0][0] = true;
        
        // Fill first row (where s is empty)
        for (int j = 1; j <= n; ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        // Fill the DP table
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2]; // '*' acts as zero occurrences
                    
                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                        dp[i][j] = dp[i][j] || dp[i - 1][j]; // '*' acts as one or more occurrences
                    }
                }
            }
        }
        
        return dp[m][n];
    }
};
