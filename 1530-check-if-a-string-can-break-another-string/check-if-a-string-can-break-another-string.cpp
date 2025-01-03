class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool one=true,two=true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]<s2[i])
            one=false;
            if(s2[i]<s1[i])
            two=false;
        }
        return one || two;
    }
};