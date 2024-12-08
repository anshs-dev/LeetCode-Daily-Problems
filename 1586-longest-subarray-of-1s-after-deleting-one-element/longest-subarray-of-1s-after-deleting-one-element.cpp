class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int right=0,left=0,count=0,max_len=0;
       while(right<nums.size()){
        if(nums[right]==0)
        count++;
        if(count>1){
            while(count!=1){
                if(nums[left]==0)
                count--;
                left++;
            }
        }
        max_len=max(max_len,right-left);
        right++;
       }
       return max_len;
    }
};