class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,max_len=0,count=0;
        int temp=k;
        while(right<nums.size()){
            if(nums[right]==0)
            temp--;
            if(temp==-1){
                while(temp!=0){
                    if(nums[left]==0)
                    temp++;
                    left++;
                }
            }
             right++;
            max_len=max(max_len,right-left);
        }
      return max_len;
    }
};