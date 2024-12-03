class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>result;
        result=nums;
        while(nums.size()!=1){
        nums=result;
        result.clear();
        for(int i=0;i<nums.size()-1;i++){
         int val=nums[i]+nums[i+1];
         val=val%10;
        result.push_back(val);
        }
        }
        return nums[0];
    }
};