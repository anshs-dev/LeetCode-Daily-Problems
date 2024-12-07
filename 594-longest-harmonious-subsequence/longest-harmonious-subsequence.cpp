class Solution {
public:
    int findLHS(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>m;
        for(int n:nums)
        m[n]++;
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.first>b.first;
        });
        int max_freq=0;
        int freq=0;
        for(int i=0;i<v.size()-1;i++){
            if(abs(v[i].first-v[i+1].first)==1){
             freq=v[i].second+v[i+1].second;
             max_freq=max(freq,max_freq);
            }
        }
        return max_freq;

    }
};