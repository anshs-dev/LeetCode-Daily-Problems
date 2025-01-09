class Solution {
public:
    bool checkString(string s) {
        string result="";
        for(char x:s){
            if(!result.empty() && x=='a' && result.back()=='b')
            return false;
            else
            result+=x;
        }
        return true;
    }
};