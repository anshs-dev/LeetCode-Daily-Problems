class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums)
        m[x]++;
        int maxfreq=-1;
        int maxelement=0;
        for(const auto &x:m){
            if(x.second>maxfreq){
            maxfreq=x.second;
            maxelement=x.first;
        }
        }
        return maxelement;
    }
};