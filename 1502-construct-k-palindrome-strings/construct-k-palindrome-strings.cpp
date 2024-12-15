class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.length())
        return false;
        unordered_map<char,int>m;
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