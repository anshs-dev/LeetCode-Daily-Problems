class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        string result="";
        while(left<s.length()){
            string temp="";
            while(left<s.length()){
                temp=s[left]+temp;
                left++;
                if(s[left]==' '){
                    left++;
                    break;
                }   
            }
            if(left==s.length()){
            result+=temp;
            return result;
            }
            else
            result+=temp;
            result+=" ";
        }
        return result;
    }
};