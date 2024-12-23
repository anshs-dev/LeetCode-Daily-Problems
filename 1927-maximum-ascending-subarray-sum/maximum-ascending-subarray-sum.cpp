class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum=0;
        int diff=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                max_sum=max(max_sum,diff);
                diff=nums[i];
            }
            else
             diff+=nums[i];
        }
        return max(max_sum,diff);
    }
};