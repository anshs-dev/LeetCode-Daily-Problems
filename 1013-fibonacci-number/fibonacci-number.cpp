class Solution {
public:
    int fib(int n) {
        int first=0;
        int second=1;
        int sum;
        for(int i=0;i<n-1;i++){
        sum=first+second;
        first=second;
        second=sum;
        }
        return sum;
    }
};