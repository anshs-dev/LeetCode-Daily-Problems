class Solution {
public:
    string getSmallestString(int n, int k) {
        string result="";
        result.insert(0,n,'a');
        k-=n;
        n--;
        while(n>=0 && k>0){
            int mini=min(25,k);
            k-=mini;
            result[n]+=mini;
            n--;
        }
        return result;
    }
};