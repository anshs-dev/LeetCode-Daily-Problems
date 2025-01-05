class Solution {
public:
    void mid_diverge(string s,int &max_len,string &longest,int left,int right){
    while(left>=0 && right<s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    if(right-left-1>max_len){
        max_len=right-left-1;
        longest=s.substr(left+1,max_len);
    }
    }
    string longestPalindrome(string s) {
        string longest="";
        int max_len=0;
        for(int i=0;i<s.length();i++){
        mid_diverge(s,max_len,longest,i,i);
        mid_diverge(s,max_len,longest,i,i+1);     
        }
        return longest;
    }
};