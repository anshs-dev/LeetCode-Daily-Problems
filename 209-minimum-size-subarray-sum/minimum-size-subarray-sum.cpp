class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0,min_len=INT_MAX,current_sum=0;
        while(right<nums.size()){
            current_sum+=nums[right];
            if(current_sum>=target){
                while(current_sum>=target){
                    min_len=min(min_len,right-left+1);
                    current_sum-=nums[left];
                    left++;
                }
            }
            right++;
        }
        return min_len==INT_MAX?0:min_len;
    }
};