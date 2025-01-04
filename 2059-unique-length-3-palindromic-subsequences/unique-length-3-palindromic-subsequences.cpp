class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,pair<int,int>>m;
        for(int i=0;i<s.length();i++){
            if(!m.count(s[i]))
            m[s[i]].first=i;
            m[s[i]].second=i;
        }
        int count=0;
        for(auto &x:m){
            pair<int,int>p=x.second;
            if(p.second-p.first<2)
            continue;
            unordered_set<char>middle(s.begin()+p.first+1,s.begin()+p.second);
            count+=middle.size();
        }
        return count;
    }
};