class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string ans = "";
        long long n = numerator, d = denominator;

        // Handle sign
        if ((n < 0) ^ (d < 0)) ans += "-";

        // Work with positive values
        n = llabs(n);
        d = llabs(d);

        // Integer part
        ans += to_string(n / d);
        long long rem = n % d;
        if (rem == 0) return ans;

        ans += ".";

        // Fractional part with remainder map
        unordered_map<long long, int> mp;
        while (rem != 0) {
            if (mp.find(rem) != mp.end()) {
                ans.insert(mp[rem], "(");
                ans += ")";
                break;
            }
            mp[rem] = ans.size();
            rem *= 10;
            ans += to_string(rem / d);
            rem %= d;
        }
        return ans;
    }
};
