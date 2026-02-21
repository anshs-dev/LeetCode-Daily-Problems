class Solution {
public:
    bool isprime(int num){
        if(num==1 || num==0) return false;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(isprime(__builtin_popcount(i))) count++;
        }
        return count;
    }
};