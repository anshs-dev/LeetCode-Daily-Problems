class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.empty())
        return t[0];
        int sum1=0;
        int sum2=0;
        for(char x:s)
        sum1+=int(x);
        for(char c:t)
        sum2+=int(c);
        sum2-=sum1;
        return char(sum2);
    }
};