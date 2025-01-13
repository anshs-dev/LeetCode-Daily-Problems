class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result="";
        for(string x:words){
            if(result.length()<=s.length()){
                if(result==s)
                return true;
            }
            else
            return false;
            result+=x;
        }
        return s==result;
    }
};