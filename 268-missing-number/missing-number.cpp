class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            sum+=i+1;
            sum2+=nums[i];
        }
        return sum-sum2;
    }
};