class Solution {
public:
    int helper(int temp){
        for(int i=0;i<=temp-1;i++) if((i|(i+1))==temp) return i;
        return -1;
    }
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>result;
        for(int x:nums) result.push_back(helper(x));
        return result;
    }
};