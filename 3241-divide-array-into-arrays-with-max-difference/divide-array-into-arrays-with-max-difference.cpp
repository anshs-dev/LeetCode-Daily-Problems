class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=2;i<nums.size();i+=3){
            if(nums[i]-nums[i-2]>k)
            return {};
            else
            v.push_back({nums[i-2],nums[i-1],nums[i]});
        }
        return v;
    }
};