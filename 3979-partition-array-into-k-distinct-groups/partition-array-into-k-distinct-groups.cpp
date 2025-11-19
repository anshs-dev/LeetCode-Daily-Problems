class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        for(auto x:m) if(x.second>nums.size()/k) return false;
        return true;
    }
};