class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int great=1,low=1,max_great=1,max_low=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
            great++;
            else{
                max_great=max(max_great,great);
                great=1;
            }
        }
        max_great=max(max_great,great);
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])
            low++;
            else{
                max_low=max(max_low,low);
                low=1;
            }
        }
        max_low=max(max_low,low);
        return max(max_low,max_great);
    }
};