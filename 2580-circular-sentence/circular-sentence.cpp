class Solution {
public:
    bool isCircularSentence(string s) {
        int n=s.length();
        if(s[0]!=s[n-1])
        return false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==' ' && s[i-1]!=s[i+1])
            return false;
        }
        return true;
    }
};