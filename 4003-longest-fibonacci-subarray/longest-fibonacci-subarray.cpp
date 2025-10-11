class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_count=2,count=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-1]+nums[i-2]) count++;
            else count=2;
            max_count=max(count,max_count);
        }
        return max_count;
    }
};