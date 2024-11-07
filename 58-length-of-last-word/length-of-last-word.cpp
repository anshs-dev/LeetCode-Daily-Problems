class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        int word=0;
        int i;
        for(i=len-1;i>=0;i--){
            if(s[i]==' ')
               continue;
               else
               break;
        }
        for(;i>=0;i--){
            if(s[i]==' ')
            break;
            else
            word++;
        }
        return word;
    }
};