class Solution {
public:
    string smallestNumber(string pattern) {
        string res="";
        stack<char>st;
        char num='1';
        for(char x:pattern){
            st.push(num++);
            if(x=='I'){
                while(!st.empty()){
                    res+=st.top();
                    st.pop();
                }
            }
        }
        st.push(num++);
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};