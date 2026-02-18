class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=-1;
        while(n>0){
            int rem=n%2;
            n/=2;
            if(prev==rem) return false;
            prev=rem;
        }
        return true;
    }
};