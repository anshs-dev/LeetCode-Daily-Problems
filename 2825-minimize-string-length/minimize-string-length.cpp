class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>result(s.begin(),s.end());
        return result.size();
    }
};