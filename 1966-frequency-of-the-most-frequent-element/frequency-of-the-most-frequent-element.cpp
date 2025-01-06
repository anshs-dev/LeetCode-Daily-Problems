class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int right=0,left=0;
        long long total_sum=0;
        int max_count=1;
        while(right<nums.size()){
            total_sum+=nums[right];
            if(nums[right]*(long)(right-left+1)>total_sum+k){
                while(nums[right]*(long)(right-left+1)>total_sum+k){
                    total_sum-=nums[left];
                    left++;
                }
            }
            else{
                max_count=max(max_count,right-left+1);
            }
            right++;
        }
        return max_count;
    }
};