class Solution {
public:
    bool isValid(string s) {
        stack<char>stuck;
        unordered_map<char,char>m={{')','('},{'}','{'},{']','['}};
        for(char c:s){
            if(m.count(c)){
                if(!stuck.empty() && stuck.top()==m[c])
                stuck.pop();
                else
                return false;
            }
            else
            stuck.push(c);
        }
        return !bool(stuck.size());
    }
};