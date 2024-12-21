class Solution {
public:
    int numberOfChild(int n, int k) {
        return k/--n&1?n-k%n:k%n; 
    }
};