class Solution {
public:
    int integerBreak(int n) {
        if(n==2)
        return 1;
        if(n==3)
        return 2;
        int times=n/3;
        int result=1;
        if(n%3==1){
            times--;
            result=4;
        }
        else if(n%3==2){
            result=2;
        }
        result=result*pow(3,times);
        return result;
      


    }
};