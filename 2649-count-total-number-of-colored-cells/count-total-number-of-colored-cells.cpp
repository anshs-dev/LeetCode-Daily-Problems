class Solution {
public:
    long long coloredCells(int n) {
        return ((long long)n*(long long)n)+(long long)((long long)(n-1)*(long long)(n-1));
    }
};