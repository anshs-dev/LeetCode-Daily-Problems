class Solution {
public:
    long long fact(long long temp){
        if(temp==0 || temp==1) return 1;
        return temp * fact(temp-1);
    }
    bool isDigitorialPermutation(int n) {
        long long temp=n,sum=0;
        while(temp>0){
            sum+=fact(temp%10);
            temp/=10;
        }
        string t=to_string(sum);
        sort(t.begin(),t.end());
        do if(stoi(t)==n) return true;
        while(next_permutation(t.begin(),t.end()));
        return false;
    }
};