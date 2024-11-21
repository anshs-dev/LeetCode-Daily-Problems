class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        int count=0;
        if(n==1)
        return 1;
        if(n==3)
        return 2;
        while(n>=0){
        n-=i;
        i++;
        count++;
        }
        return count-1;
    }
};