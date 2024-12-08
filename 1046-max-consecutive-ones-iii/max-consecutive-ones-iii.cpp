class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int left=0;
       int right=0;
       int max_len=0;
       int count=0;
       while(right<nums.size()){
       if(nums[right]==0){
        count++;
       }
       if(count>k){
        while(count>k){
            if(nums[left]==0)
            count--;
            left++;
        }
       }
       max_len=max(max_len,right-left+1);
       right++;
       }
       return max_len;
    }
};