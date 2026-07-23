class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid>0 && mid<nums.size()-1 && nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) return nums[mid];
            else if(nums[mid]>=nums[low]){
                if(nums[low]<=nums[mid] && nums[low]<=nums[high]) high=mid-1;
                else low=mid+1;
            }
            else{
                if(nums[mid]>=nums[high] && nums[mid]<=nums[low]) low=mid+1;
                else high=mid-1;
            }
        }
        return nums[low];
    }
};