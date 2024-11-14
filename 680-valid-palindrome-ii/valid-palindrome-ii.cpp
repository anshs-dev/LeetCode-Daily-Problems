class Solution {
public:
    bool validPalindrome(string s) {
        int last=s.length()-1;
        int left=0;
        int count=0;
        while (left<last) {
            if (count>1)
                return false;
            if (s[left]==s[last]) {
                left++;
                last--;
            } else {
                return palindrome(s.substr(left+1,last-left)) || palindrome(s.substr(left,last-left));
            }
        }
        return true;
    }

    bool palindrome(string x) {
        string rev=x;
        reverse(rev.begin(),rev.end());
        return x==rev;
    }
};
