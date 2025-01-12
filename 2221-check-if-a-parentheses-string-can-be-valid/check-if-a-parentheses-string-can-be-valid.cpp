class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.length() % 2 != 0) return false;
        int current = 0, chances = 0;
        for (int i = 0; i < s.length(); i++) {
            if (locked[i] == '1') {
                if (s[i] == '(') current++;
                else current--;
            } else {
                chances++;
            }
            if (current + chances < 0) return false;
        }
        current = 0, chances = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (locked[i] == '1') {
                if (s[i] == ')') current++;
                else current--;
            } else {
                chances++;
            }
            if (current + chances < 0) return false;
        }
        return true;
    }
};
