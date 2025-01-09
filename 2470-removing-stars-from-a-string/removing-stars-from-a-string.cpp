class Solution {
public:
    string removeStars(string s) {
        string result="";
        for(char x:s){
            if(!result.empty() && x=='*') result.pop_back();
            else result+=x;
        }
        return result;
    }
};