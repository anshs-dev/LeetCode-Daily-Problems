class Solution {
public:
    bool isValid(string s) {
        stack<char>tree;
        unordered_map<char,char>m={{')','('},{']','['},{'}','{'}};
        for(char x:s){
            if(m.count(x)){
                if(!tree.empty() && tree.top()==m[x])
                tree.pop();
                else
                return false;
            }
            else
                tree.push(x);
            
        }
        return tree.empty();
      
    }
};