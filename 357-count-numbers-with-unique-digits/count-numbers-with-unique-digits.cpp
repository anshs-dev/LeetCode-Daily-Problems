class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        if(n==1) return 10;
        int sum=10,last=9,curr=9;
        for(int i=2;i<=n;i++){
            curr=curr*last;
            sum+=curr;
            last--;
        }
        return sum;
    }
};