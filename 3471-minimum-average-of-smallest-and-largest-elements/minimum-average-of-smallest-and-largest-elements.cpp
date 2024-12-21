class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        double min_average=INT_MAX;
        while(left<right){
        double ave=double(nums[left]+nums[right])/2;
        min_average=min(min_average,ave);
        left++;
        right--;
        }
        return min_average;
    }
};