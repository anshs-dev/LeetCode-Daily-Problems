class Solution {
public:
    bool checkOnesSegment(string s) {
        bool one=true;
        for(int i=0;i<s.length();i++){
            if(!one && s[i]=='1') return one;
            if(s[i]=='1') {
                while(i<s.length() && s[i]=='1') i++;
                one=false;
            }
        }
        return true;
    }
};