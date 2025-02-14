class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>m;
        for(char x:s) m[x]++;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1] && m[s[i]]==s[i]-'0' && m[s[i+1]]==s[i+1]-'0') return string(1,s[i])+string(1,s[i+1]);
        }
        return "";
    }
};