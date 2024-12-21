class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>s(word.begin(),word.end());
        unordered_map<char,int>m;
        for(char x:s){
            if(x>='A' && x<='Z'){
                m[tolower(x)]++;
            }
            else{
                m[x]++;
            }
        }
        int count=0;
        for(auto &x:m){
            if(x.second>1)
            count++;
        }
        return count;
    }
};