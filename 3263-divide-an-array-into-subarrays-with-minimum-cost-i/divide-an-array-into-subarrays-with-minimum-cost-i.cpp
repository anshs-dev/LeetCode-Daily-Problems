class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int num=nums[0];
        auto mine=min_element(nums.begin()+1,nums.end());
        num+=*mine;
        nums.erase(mine);
        mine=min_element(nums.begin()+1,nums.end());
        num+=*mine;
        return num;
    }
};