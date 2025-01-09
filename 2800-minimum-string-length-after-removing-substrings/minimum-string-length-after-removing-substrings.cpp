class Solution {
public:
    int minLength(string s) {
        stack<char>str;
        for(char x:s){
            if(str.empty()){
                str.push(x);
                continue;
            }
            else if(x=='B' && str.top()=='A')
            str.pop();
            else if(x=='D' && str.top()=='C')
            str.pop();
            else
            str.push(x);
        }
        return str.size();
    }
};