class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        unordered_map<char,int>m,alr;
        for(char x:s) m[x]++;
        string res="";
        for(char x:s){
            while(!st.empty() && st.top()>x && m[st.top()]>=1 && alr[x]<=0){
                alr[st.top()]--;
                st.pop();
            }
            if(alr[x]<=0){
                alr[x]++;
                st.push(x);
            }
            m[x]--;
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        ranges::reverse(res);
        return res;
    }
};