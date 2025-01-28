class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max_diff=INT_MIN;
        for(int i=1;i<nums.size();i++) max_diff=max(max_diff,abs(nums[i]-nums[i-1]));
        max_diff=max(max_diff,abs(nums[nums.size()-1]-nums[0]));
        return abs(max_diff);
    }
};