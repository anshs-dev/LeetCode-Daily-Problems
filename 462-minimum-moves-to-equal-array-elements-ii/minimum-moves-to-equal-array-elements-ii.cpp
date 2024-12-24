class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int median;
        sort(nums.begin(),nums.end());
        if(nums.size()%2==1)
        median=nums[nums.size()/2];
        else
        median=(nums[nums.size()/2]+nums[(nums.size()/2)-1])/2;
        int moves=0;
        for(int x:nums)
        moves=moves+abs(x-median);
        return moves;
    }
};