class Solution {
public:
    const int mod=1e9+7;
    int numSub(string s) {
        int left=0,count=0;
        for(long long right=0;right<s.length();right++){
            if(s[right]=='0') left=right+1;
            else count=(count+(right-left+1)%mod)%mod;
        }
        return count;
    }
};