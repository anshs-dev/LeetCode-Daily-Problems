class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>result;
         vector<vector<int>>result2;
        if(nums1.size()==0 || nums2.size()==0)return result2;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>minHeap;
        for(int j=0;j<nums2.size();j++)
        minHeap.push({nums1[0]+nums2[j],{0,j}});
        while(!minHeap.empty() && result.size()<k){
            auto top=minHeap.top();
            minHeap.pop();
            int i=top.second.first;
            int j=top.second.second;
            result.push_back({nums1[i],nums2[j]});
            if(i+1<nums1.size()){
                minHeap.push({nums1[i+1]+nums2[j],{i+1,j}});
            }
        }
        for(const auto &p:result){
            result2.push_back({p.first,p.second});
        }
        return result2;
    }
};