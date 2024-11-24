class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    unordered_map<int,int>m;
    for(int n:nums)
    m[n]++;
    vector<int>x;
    for(auto &c:m){
        if(c.second==1)
        x.push_back(c.first);
    }
    return x;
    }
};