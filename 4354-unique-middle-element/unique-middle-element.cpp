class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if(ssize(nums)==1) return true;
        if(ssize(nums)==2 && nums[0]!=nums[1]) return true;
        return ranges::count(nums,nums[ssize(nums)/2])<=1;
    }
};