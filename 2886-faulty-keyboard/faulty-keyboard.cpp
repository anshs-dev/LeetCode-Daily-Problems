class Solution {
public:
    string finalString(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='i' && i>0){
                reverse(s.begin(),s.begin()+i);
            }
        }
        string temp="";
        for(char x:s){
            if(x!='i')
            temp+=x;
        }
        return temp;
    }
};