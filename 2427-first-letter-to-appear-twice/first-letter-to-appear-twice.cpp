class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        for(char x:s){
            m[x]++;
            if(m[x]>1)
            return x;
        }
        return -1;
    }
};