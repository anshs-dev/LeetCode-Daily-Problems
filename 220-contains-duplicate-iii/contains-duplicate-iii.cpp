class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<int>window;
        for(int i=0;i<nums.size();i++){
          auto lower=window.lower_bound((long long)nums[i]-valueDiff);
          if(lower!=window.end() && abs(*lower-nums[i])<=valueDiff)
          return true;
          window.insert(nums[i]);
          if(i>=indexDiff)
          window.erase(nums[i-indexDiff]);
        }
        return false;
    }
};