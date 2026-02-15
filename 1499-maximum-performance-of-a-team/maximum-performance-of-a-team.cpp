class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        const int mod=1e9+7;
        vector<pair<int,int>>v;
        for(int i=0;i<speed.size();i++) v.push_back({efficiency[i],speed[i]});
        sort(v.rbegin(),v.rend());
        long long ans=0,final=INT_MIN;
        priority_queue<int,vector<int>,greater<int>>minHeap;
        for(int i=0;i<v.size();i++){
            ans+=v[i].second;
            minHeap.push(v[i].second);
            if(minHeap.size()>k){
                ans-=minHeap.top();
                minHeap.pop();
            }
            final=max(final,ans*1LL*v[i].first);
        }
        return final%mod;
    }
};