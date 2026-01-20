class Solution {
public:
    int check(int temp){
        for(int i=1;i<=temp;i++) if((i|(i+1))==temp) return i;
        return -1;
    }
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>result;
        for(int i=0;i<nums.size();i++) result.push_back(check(nums[i]));
        return result;
    }
};