class Solution {
public:
    int secondHighest(string s) {
        int max=-1;
        int second_max=-1;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                if((s[i]-'0')>max){
                    second_max=max;
                    max=(s[i]-'0');
                }
                else if((s[i]-'0')>second_max && (s[i]-'0')<max){
                    second_max=(s[i]-'0');
                }
            }
        }
        return second_max;
    }
};