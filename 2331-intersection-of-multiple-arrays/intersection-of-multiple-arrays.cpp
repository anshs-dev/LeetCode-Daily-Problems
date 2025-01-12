class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums){
            for(int a:x)
            m[a]++;
        }
        vector<int>result;
        for(auto &x:m){
            if(x.second==nums.size())
            result.push_back(x.first);
        }
        sort(result.begin(),result.end());
        return result;
    }
};