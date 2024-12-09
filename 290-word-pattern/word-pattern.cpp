class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        string result="";
        vector<string>v;
        set<string>unique;
        for(char x:s){
        if(x==' '){
            v.push_back(result);
            result="";
        }
        else
        result+=x;
        }
        v.push_back(result);
        if(v.size()!=pattern.length())
        return false;
        for(int i=0;i<pattern.length();i++){
            char current=pattern[i];
            string hello=v[i];
            if(m.count(current)){
                if(m[current]!=hello)
                return false;
            }else{
                if(unique.count(hello))
                return false;
            }
            m[current]=hello;
            unique.insert(hello);
        }
        return true;
    }
};