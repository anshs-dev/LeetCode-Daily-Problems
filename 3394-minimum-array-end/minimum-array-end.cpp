class Solution {
public:
    long long minEnd(int n, int x) {
        n -= 1;  // We already have the first element as x
        long long ans = x;  // Start with x as the first element
        for (int i = 0; i < 31; ++i) {  // Iterate over 31 bits (32-bit integers)
            if ((x >> i & 1) == 0) {  // If the i-th bit of x is 0
                ans |= (n & 1) << i;  // Set the corresponding bit in ans
                n >>= 1;  // Right shift n for the next bit
            }
        }
        ans |= (long long)n << 31;  // Set the remaining bits of n in ans
        return ans;  // Return the final result
    }
};
