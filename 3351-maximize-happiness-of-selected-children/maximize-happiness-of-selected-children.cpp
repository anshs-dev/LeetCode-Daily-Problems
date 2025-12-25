class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        long long max_sum=0;
        int i=0;
        while(k--){
            happiness[i]=max(happiness[i]-i,0);
            max_sum+=happiness[i++];
        }
        return max_sum;
    }
};