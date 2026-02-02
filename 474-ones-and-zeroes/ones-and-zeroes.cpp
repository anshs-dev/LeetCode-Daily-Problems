class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>v;
        for(auto x:strs){
            int zero=0,one=0;
            for(char c:x) if(c=='0') zero++;
            else one++;
            v.push_back({zero,one});
        }
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(auto x:v){
            for(int i=m;i>=x.first;i--){
                for(int j=n;j>=x.second;j--){
                    dp[i][j]=max(dp[i][j],dp[i-x.first][j-x.second]+1);
                }
            }
        }
        return dp[m][n];
    }
};