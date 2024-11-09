class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();){
            if(i+2<nums.size() && nums[i]==nums[i+1]){
                i+=3;
            }
            else
            return nums[i];
        }
        return 0;
    }
};