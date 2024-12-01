class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        int size=nums.size();
        unordered_map<int,int>m;
        for(int n:nums)
        m[n]++;
        for(auto &x:m){
            if(x.second>size/3)
            result.push_back(x.first);
        }
        return result;
    }
};