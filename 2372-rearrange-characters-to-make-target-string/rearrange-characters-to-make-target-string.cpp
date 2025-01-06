class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>m,m2;
        for(char x:target)
        m[x]++;
        for(char x:s){
        m2[x]++;
        }
        int count=INT_MAX;
        for(char x:target){
            if(!m.count(x))
            return 0;
            count=min(count,m2[x]/m[x]);
        }
        return count;
    }
};