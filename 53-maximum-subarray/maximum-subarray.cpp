class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(nums[i],nums[i]+sum);
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }
};