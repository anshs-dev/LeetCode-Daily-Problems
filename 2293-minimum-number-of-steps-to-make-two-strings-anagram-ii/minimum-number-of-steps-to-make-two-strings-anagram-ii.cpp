class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m1;
        for(char x:s)
        m1[x]++;
        for(char x:t)
        m1[x]--;
        int count=0;
        for(auto &x:m1)
        count+=abs(x.second);
        return count;
    }
};