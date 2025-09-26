class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        string s = to_string(num);
        for(char x : s) if(num % (x-'0') == 0 ) count++;
        return count;
    }
};