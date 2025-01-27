class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(string x:words){
        if(x.length()>s.length()) continue;
        if(s.substr(0,x.length())==x) count++;
        }
        return count;
    }
};