class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        //priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
        vector<pair<int,int>>v;
        for(int i=0;i<nums1.size();i++) v.push_back({nums2[i],nums1[i]});
        sort(v.rbegin(),v.rend());
        //for(auto x:v) cout<<x.first<<" "<<x.second<<" ";
        long long max_score=0,ans=-1;
        priority_queue<int,vector<int>,greater<int>>minHeap;
        for(int i=0;i<v.size();i++){
            max_score+=v[i].second;
            minHeap.push(v[i].second);
            if(minHeap.size()>k){
                max_score-=minHeap.top();
                minHeap.pop();
            }
            if(minHeap.size()==k) ans=max(ans,max_score*v[i].first);
        }
        return ans;
    }
};