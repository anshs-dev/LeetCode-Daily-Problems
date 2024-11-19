class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        long long currentSum=0,maxSum=0;
        int start=0;
        for(int end=0;end<nums.size();end++) {
            count[nums[end]]++;
            currentSum+=nums[end];
            while(count[nums[end]]>1||(end-start+1)>k) {
                count[nums[start]]--;
                currentSum-=nums[start];
                if(count[nums[start]]==0) 
                count.erase(nums[start]);
                start++;
            }
            if(end-start+1==k) maxSum=max(maxSum,currentSum);
        }
        return maxSum;
    }
};
