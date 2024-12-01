class Solution {
public:
    int maxPower(string s) {
        int len=1;
        char b=s[0];
        int max_len=0;
        for(int i=1;i<s.length();i++){
        if(b==s[i]){
            len++;
        }
        else{
            max_len=max(len,max_len);
            b=s[i];
            len=1;
        }
        }
        return max(max_len,len);
    }
};