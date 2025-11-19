class Solution {
public:
    string processStr(string s) {
        string result="";
        for(char x:s){
            if(x=='%') reverse(result.begin(),result.end());
            else if(x=='#') result+=result;
            else if(x=='*' && !result.empty()) result.pop_back();
            else if(x>='a' && x<='z') result+=x;
        }
        return result;
    }
};