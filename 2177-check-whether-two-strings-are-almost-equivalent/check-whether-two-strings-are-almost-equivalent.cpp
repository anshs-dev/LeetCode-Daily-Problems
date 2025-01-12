class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char x:word1) m1[x]++;
        for(char x:word2) m2[x]++;
        for(char x:word1){
            if(abs(m1[x]-m2[x])>3)
            return false;
        }
        for(char x:word2){
            if(abs(m1[x]-m2[x])>3)
            return false;
        }
        return true;
    }
};