class Solution {
public:
    int countTriples(int n) {
       int count=0;
       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) continue;
         int num=i*i+j*j;
         int num2=sqrt(num);
         if(num2<=n && num2*num2==num)
         count++;
        }
       } 
       return count;
    }
};