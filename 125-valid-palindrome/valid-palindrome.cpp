#include <algorithm>
#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for (char x : s) {
            if (isalnum(x)) {
                s2 += tolower(x);
            }
        }
        string rev = s2;
        reverse(rev.begin(), rev.end());
        return rev == s2;
    }
};
