class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int x=0;
        for(int i=0;i<nums.size();i++){
        x=(x*2+nums[i])%5;
        ans.push_back(x==0);
        }
        return ans;
    }
};