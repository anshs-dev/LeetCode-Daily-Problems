class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
      if(n==0)
      return 1;
      if(n==1)
      return 10;
      int product=9;
      int sum=10;
      for(int i=2;i<n+1;i++){
        sum+=product*(11-i);
        product*=(11-i);
      }
      return sum;
    }
};