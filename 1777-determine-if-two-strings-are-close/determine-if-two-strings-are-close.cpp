class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
        return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char x:word1)
        m1[x]++;
        for(char x:word2)
        m2[x]++;
        unordered_set<char>s1(word1.begin(),word1.end());
        unordered_set<char>s2(word2.begin(),word2.end());
        if(s1!=s2)
        return false;
        vector<int>res1,res2;
        for(auto &x:m1) res1.push_back(x.second);
        for(auto &x:m2) res2.push_back(x.second);
        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        return res1==res2;
    }
};