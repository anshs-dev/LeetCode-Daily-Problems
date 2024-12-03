class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string vec;
        for(string x:words){
            string b;
            b=x;
            reverse(b.begin(),b.end());
            if(b==x)
            return x;
        }
        return vec;
    }
};