class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int x:bulbs) m[x]++;
        for(auto x:m) if(x.second%2==1) res.push_back(x.first);
        sort(res.begin(),res.end());
        return res;
    }
};