class Solution {
public:
    string toLowerCase(string s) {
        string result;
        for(int i=0;i<s.length();i++){
            if(int(s[i])>=97 && int(s[i])<=122){
                result+=s[i];
            }
            else if(int(s[i])>=65 && int(s[i])<=90){
                s[i]=int(s[i])+32;
                result+=s[i];
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
};