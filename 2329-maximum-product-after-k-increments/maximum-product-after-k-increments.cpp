class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>a(nums.begin(),nums.end());
        const int MOD = 1e9 + 7;
        while(k--){
            int first=a.top();
            a.pop();
            a.push(first+1);
        }
        long long x=1;
        while(!a.empty()){
            x=(x*a.top())%MOD;
            a.pop();
        }
        return x;
    }
};