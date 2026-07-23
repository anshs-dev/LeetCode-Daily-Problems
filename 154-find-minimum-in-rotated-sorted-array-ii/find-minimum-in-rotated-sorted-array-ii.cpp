class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=ssize(nums)-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                low++;
                high--;
            }
            else if(nums[high]<=nums[low] && nums[high]<nums[mid]) low=mid+1;
            else high=mid;
        }
        return nums[low];
    }
};