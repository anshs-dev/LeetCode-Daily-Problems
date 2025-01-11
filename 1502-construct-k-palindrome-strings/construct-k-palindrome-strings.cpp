class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>m;
        if(s.length()<k)
        return false;
        for(char x:s)
        m[x]++;
        int odd=0;
        for(auto &x:m){
            if(x.second%2!=0)
            odd++;
        }
    return k>=odd;
    }
};