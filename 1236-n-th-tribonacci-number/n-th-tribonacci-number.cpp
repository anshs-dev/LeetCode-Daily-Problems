class Solution {
public:
    int tribonacci(int n) {
        int first=0,second=1,third=1;
        if(n==0)
        return 0;
        if(n==1 || n==2)
        return 1;
        int fib=0;
        for(int i=2;i<n;i++){
        fib=first+second+third;
        first=second;
        second=third;
        third=fib;
        }
        return fib;
    }
};