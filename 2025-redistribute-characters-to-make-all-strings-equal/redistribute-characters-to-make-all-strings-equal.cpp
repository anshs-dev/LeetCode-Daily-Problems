class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>m;
        for(string x:words){
            for(char a:x){
                m[a]++;
            }
        }
        if(words.size()==1)
        return true;
        for(auto &x:m){
        if(x.second%words.size()!=0)
        return false;
        }
        return true;
    }
};