class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0,min=nums[0];
        for(int x:nums) sum=sum+abs(x-min);
        return sum;
    }
};