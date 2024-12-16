class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>maxHeap;
        for(auto &x:points){
            int distance=x[0]*x[0]+x[1]*x[1];
            maxHeap.push({distance,x});
            if(maxHeap.size()>k)
            maxHeap.pop();
        }
        vector<vector<int>>v;
        while(!maxHeap.empty()){
        auto x=maxHeap.top();
        maxHeap.pop();
        v.push_back(x.second);
        }
        return v;
    }
};