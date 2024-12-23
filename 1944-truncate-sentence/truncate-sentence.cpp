class Solution {
public:
    string truncateSentence(string s, int k) {
        string result="";
        int spaces=0;
        int left=0;
        while(spaces<k && left<s.length()){
            if(s[left]==' '){
            spaces++;
            if(spaces==k)
            break;
            }
            result+=s[left];
            left++;
        }
        return result;
    }
};