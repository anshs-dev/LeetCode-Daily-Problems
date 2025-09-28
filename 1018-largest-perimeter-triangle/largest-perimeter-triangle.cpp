class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int curr_sum=0;
        for(int i=2;i<nums.size();i++) if(nums[i-2]+nums[i-1]>nums[i]) curr_sum=max(curr_sum,nums[i-2]+nums[i-1]+nums[i]);
        return curr_sum;
    }
};