class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int left=0,right=0,min_ele=nums[0],max_ele=nums[0];
        long long count=0;
        while(right<nums.size()){
            min_ele=min(min_ele,nums[right]);
            max_ele=max(max_ele,nums[right]);
            while(max_ele-min_ele>2){
                min_ele=INT_MAX;
                max_ele=INT_MIN;
                 for(int i=left+1;i<=right;i++){
                min_ele=min(min_ele,nums[i]);
                max_ele=max(max_ele,nums[i]);
                }
                left++;
            }
            count+=right-left+1;
            right++;
        }
        return count;
    }
};