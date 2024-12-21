class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum=nums[0]+nums[1];
        int count=1;
        int left=2,right=3;
        while(right<nums.size() && nums[left]+nums[right]==sum){
            count++;
            left+=2;
            right+=2;
        }
        return count;
    }
};