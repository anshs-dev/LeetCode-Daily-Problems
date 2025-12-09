class Solution {
public:
    const int MAXV=200000;
    const int MOD=1e9+7;
    int specialTriplets(vector<int>& nums) {
        vector<int>right(MAXV+1,0),left(MAXV+1,0);
        for(int v:nums) right[v]++;
        int ans=0;
        for(int x:nums){
            right[x]--;
            long long t=2LL*x;
            if(t<=MAXV){
                int add=int(((long long)left[t]*right[t])%MOD);
                ans+=add;
                if(ans>=MOD) ans-=MOD;
            }
            left[x]++;
        }
        return ans;
    }
};