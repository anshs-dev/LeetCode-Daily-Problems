class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
     int left=0,right=0,count=0;
     long long product=1;
     while(right<nums.size()){
     product*=nums[right];
     while(product>=k && left<=right){
        product/=nums[left];
        left++;
     }
     count+=right-left+1;
     right++;
     }
     return count;
    }
};