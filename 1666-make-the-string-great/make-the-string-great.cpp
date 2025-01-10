class Solution {
public:
    string makeGood(string s) {
        string result="";
        for(char x:s){
            if(!result.empty() && abs(result.back()-x)==32){
                result.pop_back();
            }
            else{
                result+=x;
            }
        }
        return result;
    }
};