class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums)
        m[x]++;
        vector<int>smaller;
        for(int l:nums){
          int  count=0;
        for(auto &x:m){
         if(x.first<l)
         count+=x.second;
        }
        smaller.push_back(count);
        }
        return smaller;
    }
};