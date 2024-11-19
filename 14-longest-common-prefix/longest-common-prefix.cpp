class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0];
        string result="";
        for(int i=0;i<first.length();i++){
            int flag=1;
            for(string s:strs){
                if(first[i]!=s[i]){
                    return result;
                }
            }
            result+=first[i];
        }
        return result;
    }
};