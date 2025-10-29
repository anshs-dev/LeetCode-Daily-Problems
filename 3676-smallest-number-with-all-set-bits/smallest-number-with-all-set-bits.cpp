class Solution {
public:
    int smallestNumber(int n) {
        while(4){
            if((n&(n+1))==0) return n;
            n++;
        }
        return -1;
    }
};