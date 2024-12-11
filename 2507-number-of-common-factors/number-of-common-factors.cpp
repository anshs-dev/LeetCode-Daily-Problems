class Solution {
public:
    int commonFactors(int a, int b) {
        int smaller=min(a,b);
        int bigger=max(a,b);
        int count=0;
        for(int i=1;i<=smaller;i++){
            if(bigger%i==0 && smaller%i==0)
            count++;
        }
        return count;
    }
};