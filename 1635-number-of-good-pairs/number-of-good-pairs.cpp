class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums)
        m[x]++;
        int count=0;
        for(auto &x:m){
            if(x.second>1)
            count+=(x.second*(x.second-1))/2;
        }
        return count;
    }
};