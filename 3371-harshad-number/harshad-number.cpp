class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x;
        int sum=0;
        while(temp!=0){
            int d=temp%10;
            temp/=10;
            sum+=d;
        }
        return x%sum==0?sum:-1;
    }
};