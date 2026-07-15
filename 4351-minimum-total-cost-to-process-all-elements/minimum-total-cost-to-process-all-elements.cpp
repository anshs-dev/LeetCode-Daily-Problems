class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const int mod=1e9+7;
        int count=0,curr=k,start=1;
        for(int x:nums){
            if(curr<x){
                int temp=(x+k-curr-1)/k;
                curr+=(k*temp);
                curr-=x;
                count = (count + (1LL * temp * (start * 2LL + temp - 1) / 2) % mod) % mod;
                start=(start+temp)%mod;
            }
            else curr-=x;
        }
        return count;
    }
};