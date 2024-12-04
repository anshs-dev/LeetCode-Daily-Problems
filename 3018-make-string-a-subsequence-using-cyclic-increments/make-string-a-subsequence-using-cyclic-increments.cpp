class Solution {
public:
    bool canMakeSubsequence(string str, string str2) {
        int i=0,j=0;
        for(int i=0;i<str.length() && j<str2.length();i++){
            if(str2[j]-str[i]==1 || str2[j]==str[i] || str[i]-str2[j]==25)
            j++;
        }
        return j==str2.length();

    }
};