class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char x:ransomNote)
        m1[x]++;
        for(char x:magazine)
        m2[x]++;
        for(auto &x:m1){
            if(x.second>m2[x.first])
            return false;
        }
        return true;
    }
};