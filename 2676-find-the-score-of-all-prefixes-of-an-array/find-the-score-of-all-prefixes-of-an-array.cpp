class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>result;
        long long max_sum=0,max_var=0;
        for(long long x:nums){
            max_var=max(max_var,x);
            max_sum+=x+max_var;
            result.push_back(max_sum);
        }
        return result;
    }
};