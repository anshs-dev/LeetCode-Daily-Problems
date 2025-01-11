class Solution {
public:
    int alternateDigitSum(int n) {
        string x=to_string(n);
        int sum=0;
        for(int i=0;i<x.size();i++){
            if(i%2==0)
            sum+=x[i]-'0';
            else
            sum-=x[i]-'0';
        }
        return sum;
    }
};