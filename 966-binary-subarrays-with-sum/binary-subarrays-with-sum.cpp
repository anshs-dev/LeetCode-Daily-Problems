class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        long long curr=0,res=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int x:nums){
            curr+=x;
            if(m.count(curr-goal)) res+=m[curr-goal];
            m[curr]++;
        }
        return res;
    }
};