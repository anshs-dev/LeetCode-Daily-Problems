class Solution {
public:
    string getSmallestString(string s) {
        for(int i=1;i<s.length();i++){
            if((s[i]-'0')%2==0 && (s[i-1]-'0')%2==0 || (s[i]-'0')%2!=0 && (s[i-1]-'0')%2!=0){
                if(s[i-1]>s[i]){
                swap(s[i],s[i-1]);
                break;
                }
            }
        }
        return s;
    }
};