class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,temp=0;
        while(n>0){
            sum+=n%10;
            if(n%10!=0) temp=temp*10+n%10;
            n/=10;
        }
        long long res=0;
        while(temp>0){
            res=res*10+temp%10;
            temp/=10;
        }
        return sum*res;
    }
};