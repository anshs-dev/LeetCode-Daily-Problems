class Solution {
public:
    int longestPalindrome(string s) {
        int res=0;
        bool odd_is_present=false;
        unordered_map<char,int>m;
        for(char x:s) m[x]++;
        for(auto x:m) if(x.second%2==0) res+=x.second;
        else{
            odd_is_present=true;
            res+=x.second-1;
        }
        return odd_is_present?res+1:res;
    }
};