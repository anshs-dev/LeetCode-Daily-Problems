class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int result=0;
        for(int x:nums) result+=maxi-x;
        return result;
    }
};