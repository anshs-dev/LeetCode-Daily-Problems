class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int size=nums.size();
        int max_len=INT_MAX;
        int sum=0;
        while(right<size){
            sum+=nums[right];
            while(sum>=target){
                max_len=min(max_len,right-left+1);
                sum-=nums[left];
                left++;
            }
                right++;
        }
    return (max_len==INT_MAX)?0:max_len;
    }
};