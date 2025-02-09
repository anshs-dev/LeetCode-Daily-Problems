class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        long long count=0;
        for(int i=0;i<nums.size();i++){
        if(m.count(nums[i]-i)) count+=m[nums[i]-i];
        m[nums[i]-i]++;
        }
        return (long long)(nums.size()*(nums.size()-1))/2 - count;
    }
};