class Solution {
public:
    int appendCharacters(string s, string t) {
        int len=t.length(),index=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==t[index]){
                len--;
                if(len==0)
                break;
                index++;
            }
        }
        return len;
    }
};