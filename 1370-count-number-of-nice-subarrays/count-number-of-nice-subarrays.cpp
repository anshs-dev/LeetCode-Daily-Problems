class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums, int k) {
        return calculation(nums,k)-calculation(nums,k+1);
    }
    long long calculation(vector<int>nums,int k){
        int left=0,odds=0;
        long long count=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]&1) odds++;
            while(odds>=k){
                count+=nums.size()-right;
                if(nums[left]&1) odds--;
                left++;
            }
        }
        return count;
    }
};