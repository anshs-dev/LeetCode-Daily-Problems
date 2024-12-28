class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums)
        m[x]++;
        vector<vector<int>>v;
        int count=1;
        while(count!=0){
        vector<int>result;
        count=0;
        for(auto &x:m){
        if(x.second>0){
        result.push_back(x.first);
        x.second-=1;
        count=1;
        }
        }
        if(result.empty())
        break;
        v.push_back(result);
        }
        return v;
    }
};