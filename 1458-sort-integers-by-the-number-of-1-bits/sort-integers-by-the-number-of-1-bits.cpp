class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](const int a,const int b){
            int a1=__builtin_popcount(a);
            int b1=__builtin_popcount(b);
            return a1==b1?a<b:a1<b1;
        });
        return arr;
    }
};