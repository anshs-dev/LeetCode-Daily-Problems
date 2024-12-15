class Solution {
public:
    int numSub(string s) {
        long long consecutive=0;
        long long total=0;
        const int MOD = 1e9 + 7;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                consecutive++;
            }
            else{
               total=(total+consecutive*(consecutive+1)/2 % MOD) % MOD;
               consecutive=0;
            }
        }
        if(s[s.length()-1]=='1')
        total=(total+consecutive*(consecutive+1)/2 % MOD) % MOD;
        return total;
    }
};