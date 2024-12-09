class Solution {
public:
    int countSegments(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ')
            res++;
            while(i<s.length() && s[i]!=' ')
            i++;
        }
        return res;
    }
};