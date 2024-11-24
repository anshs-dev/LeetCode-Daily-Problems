class Solution {
public:
    string triangleType(vector<int>& nums) {
        string res1="equilateral";
        string res2="isosceles";
        string res3="scalene";
        string res4="none";
        if(nums[0]==nums[1] && nums[1]==nums[2])
        return res1;
        else if(((nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0])) && (nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2]))
        return res2;
        else if((nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0]) && (nums[1]!=nums[2] && nums[0]!=nums[2] && nums[1]!=nums[2]))
        return res3;
        else
        return res4;

    }
};