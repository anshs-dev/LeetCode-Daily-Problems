class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(char x:num){
            while(!st.empty() && k>0 && st.top()>x){
                st.pop();
                k--;
            }
            st.push(x);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        int i=0;
        while(i<result.length() && result[i]=='0') i++;
        if(i==result.length()) return "0";
        return result.substr(i);
    }
};