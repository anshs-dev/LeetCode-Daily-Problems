class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for( string s : words){
            string temp=s;
            reverse(temp.begin(),temp.end());
            if(s==temp) return s;
        }
        return "";
    }
};