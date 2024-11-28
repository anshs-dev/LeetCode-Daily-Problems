class Solution {
public:
    string removeDuplicates(string s4) {
        if (s4.empty()) 
            return s4;
        if (s4.length() == 1)
            return s4;
        stack<char> s;
        for (auto i:s4) {
            if(!s.empty() && s.top()==i){
                s.pop();
            }
            else{
                s.push(i);
            }
        }
        string s1 = "";
        while (!s.empty()) {
            s1 += s.top();
            s.pop();
        }
        reverse(s1.begin(), s1.end());
        return s1;
    }
};
