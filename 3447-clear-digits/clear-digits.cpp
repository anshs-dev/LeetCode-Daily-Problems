class Solution {
public:
    string clearDigits(string s) {
        string result="";
        for(char x:s){
            if(isdigit(x)) result.pop_back();
            else result+=x;
        }
        return result;
    }
};