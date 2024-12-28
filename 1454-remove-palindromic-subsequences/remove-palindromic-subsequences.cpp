class Solution {
public:
    int removePalindromeSub(string s) {
        return s.empty()?0:(s==string(s.rbegin(),s.rend())?1:2);
    }
};