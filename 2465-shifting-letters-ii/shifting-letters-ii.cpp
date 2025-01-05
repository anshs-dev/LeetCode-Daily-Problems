class Solution {
public:
    char modify_char(char x, int change){
        int temp=(x-'a'+change)%26;
        if(temp<0)
        temp+=26;
        return temp+'a';
    }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>inflation(s.length(),0);
        int temp;
        for(auto &x:shifts){
            temp=x[2]==0?-1:1;
            inflation[x[0]]+=temp;
            if(x[1]+1<s.length())
            inflation[x[1]+1]-=temp;
        }
        int current=0;
        for(int i=0;i<s.length();i++){
            current+=inflation[i];
            s[i]=modify_char(s[i],current);
        }
        return s;
    }
};