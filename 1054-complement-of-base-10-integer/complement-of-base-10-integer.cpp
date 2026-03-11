class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        long long bits=(int)log2(n)+1;
        long long mask=(1<<bits)-1;
        return mask^n;
    }
};