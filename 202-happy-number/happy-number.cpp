class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7)
        return true;
        while(n>9){
            int temp=n;
            unsigned int sum=0;
            while(temp!=0){
                int d=temp%10;
                sum+=d*d;
                temp/=10;
            }
            if(sum==1 || sum==7)
            return true;
            else
            n=sum;
        }
        return false;
    }
};