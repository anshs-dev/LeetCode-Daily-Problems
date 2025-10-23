class Solution {
public:
    bool hasSameDigits(string s) {
        string temp="";
        while(s.length()>2){
            int i=0;
            while(i<s.length()-1){
                temp+=to_string(((s[i]-'0')+(s[i+1]-'0'))%10);
                i++;
            }
            s=temp;
            temp="";
        }
        return s[0]==s[1];
    }
};