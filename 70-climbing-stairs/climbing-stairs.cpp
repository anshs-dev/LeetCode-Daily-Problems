class Solution {
public:
    int climbStairs(int n) {
        int first=1,second=2,third=0;
        if(n==1) return first;
        if(n==2) return second;
        n-=2;
        while(n--){
            third=first+second;
            first=second;
            second=third;
        }
        return third;
    }
};