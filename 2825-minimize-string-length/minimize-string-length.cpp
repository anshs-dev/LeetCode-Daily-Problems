class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>result(s.begin(),s.end());
        return result.size();
    }
};