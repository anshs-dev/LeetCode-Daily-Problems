class Solution {
public:
    bool check(string temp){
        int count=0;
        for(char x:temp){
            if(x=='(') count++;
            else if(x==')') count--;
            if(count<0) return false;
        }
        return count==0;
    }
    vector<string> removeInvalidParentheses(string s) {
        queue<string>q;
        q.push(s);
        while(!q.empty()){
            unordered_set<string>st;
            while(!q.empty()){
                st.insert(q.front());
                q.pop();
            }
            for(auto x:st){
                if(check(x)){
                    vector<string>res;
                    for(auto x:st) if(check(x)) res.push_back(x);
                    return res;
                }
            }
            for(auto x:st){
                for(int i=0;i<x.size();i++){
                    if(x[i]=='(' || x[i]==')')
                    q.push(x.substr(0,i)+x.substr(i+1));
                }
            }
        }
        return {};
    }
};