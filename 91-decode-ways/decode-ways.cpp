class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        vector<int>dp(s.size()+1,0);
        dp[0]=1;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0') dp[i+1]+=dp[i];
            if(i-1>=0 && s[i-1]!='0' && stoi(s.substr(i-1,2))<=26) dp[i+1]+=dp[i-1];
        }
        return dp[s.size()];
    }
};