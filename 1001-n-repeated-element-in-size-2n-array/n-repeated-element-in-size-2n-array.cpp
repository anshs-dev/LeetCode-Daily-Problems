class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums)
        m[x]++;
        for(auto &x:m){
            if(x.second==nums.size()/2)
            return x.first;
        }
        return -1;
    }
};