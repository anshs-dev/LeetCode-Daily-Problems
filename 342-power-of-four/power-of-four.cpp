class Solution {
public:
    bool isPowerOfFour(long long n) {
      return  n>0 && __builtin_popcount(n)==1 && (n-1)%3==0;
    }
};