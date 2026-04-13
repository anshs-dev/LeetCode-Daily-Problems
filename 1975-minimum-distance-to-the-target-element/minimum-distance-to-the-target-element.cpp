class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min_idx=INT_MAX;
        for(int i=0;i<nums.size();i++) if(nums[i]==target) min_idx=min(min_idx,abs(i-start));
        return min_idx;
    }
};