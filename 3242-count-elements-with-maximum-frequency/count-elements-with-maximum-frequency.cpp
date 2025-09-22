class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0,max_freq=0;
        for(int x:nums){
            m[x]++;
            max_freq=max(max_freq,m[x]);
        }
        for(auto x:m) if(max_freq==x.second) count+=x.second;
        return count;
    }
};