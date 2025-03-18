class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left=0,curr=0,max_curr=0;
        for(int right=0;right<nums.size();right++){
            while((curr & nums[right])!=0){
                curr^=nums[left];
                left++;
            }
            curr|=nums[right];
            max_curr=max(max_curr,right-left+1);
        }
        return max_curr;
    }
};