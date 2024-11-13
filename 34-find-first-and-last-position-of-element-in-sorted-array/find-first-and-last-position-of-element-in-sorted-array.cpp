class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int>res;
        int first_occur=-1;
        int last_occur=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first_occur=mid;
                high=mid-1;
            }
            else if(target>nums[mid])
            low=mid+1;
            else
            high=mid-1;
        }
        low=0;
        high=nums.size()-1;
        res.push_back(first_occur);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last_occur=mid;
                low=mid+1;
            }
            else if(target>nums[mid])
            low=mid+1;
            else
            high=mid-1;
        }
        res.push_back(last_occur);
        return res;
    }
};