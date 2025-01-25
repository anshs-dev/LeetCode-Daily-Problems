class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>m;
        for(char x:s) m[x]++;
        string result="";
        for(char x:order){
            if(m.count(x)){
                result.append(m[x],x);
                m.erase(x);
            }
        }
        for(char x:s){
            if(m.count(x)){
                result+=x;
                m[x]--;
                if(m[x]==0)
                m.erase(x);
            }
        }
        return result;
    }
};