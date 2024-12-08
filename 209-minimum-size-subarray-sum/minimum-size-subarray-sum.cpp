class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int sum=0;
      int max_len=INT_MAX;
      int left=0,right=0;
      while(right<nums.size()){
        sum+=nums[right];
        if(sum>=target){
            while(sum>=target){
                max_len=min(max_len,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        right++;
      }
      return max_len==INT_MAX?0:max_len;
    }
};