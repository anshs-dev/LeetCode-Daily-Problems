class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(char x:s)
        m[x]++;
        for(char x:t)
        m[x]--;
        int count=0;
        for(auto &x:m){
            count+=abs(x.second);
        }
        return count/2;
    }
};