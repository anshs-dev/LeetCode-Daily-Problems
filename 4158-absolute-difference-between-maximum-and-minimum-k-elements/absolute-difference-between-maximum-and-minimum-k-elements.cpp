class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int first=0,second=0;
        for(int i=0;i<nums.size() && i<k;i++) first+=nums[i];
        for(int i=nums.size()-1;i>=0 && k--;i--) second+=nums[i];
        return abs(second-first);
    }
};