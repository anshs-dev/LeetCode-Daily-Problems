class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>dp(s.size()+1,false);
        dp[0]=true;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(!dp[i]) continue;
            for(auto x:wordDict){
                if(s.substr(i,x.size())==x) dp[i+x.size()]=true;
            }
        }
        return dp[n];
    }
};