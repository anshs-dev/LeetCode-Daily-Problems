class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>s1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            s1.push(i);
            else if(s[i]==')'){
                int index=s1.top();
                s1.pop();
                reverse(s.begin()+index+1,s.begin()+i);
            }
        }
        string result="";
        for(char x:s){
            if(x!='(' && x!=')')
            result+=x;
        }
        return result;
        
    }
};