class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m1,m2;
        string b="balloon";
        for(char x:b)
        m1[x]++;
        for(char x:text)
        m2[x]++;
        int count=INT_MAX;
        for(char x:b){
            if(!m2.count(x))
            return 0;
           count=min(count,m2[x]/m1[x]);
        }
        return count;
    }
};