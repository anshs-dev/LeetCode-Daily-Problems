class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i == s.length()) return 0;
        int flag = 1;
        if (s[i] == '-') {
            flag = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }
        long long result = 0;
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            if (result > (INT_MAX - (s[i] - '0')) / 10) {
                return flag == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + (s[i] - '0');
            i++;
        }
        result *= flag;
        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;
        return static_cast<int>(result);
    }
};