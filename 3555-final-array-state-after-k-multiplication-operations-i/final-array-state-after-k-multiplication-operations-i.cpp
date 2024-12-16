class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
        int i=0;
        for(int x:nums){
        minHeap.push({x,i});
        i++;
        }
        while(k--){
            auto element=minHeap.top();
            minHeap.pop();
            minHeap.push({(element.first*multiplier),element.second});
        }
        vector<pair<int,int>>v;
        while(!minHeap.empty()){
            auto m=minHeap.top();
            v.push_back({m.first,m.second});
            minHeap.pop();
        }
        sort(v.begin(),v.end(),[](const pair<int,int>a,const pair<int,int>b){
            return a.second<b.second;
        });
        vector<int>result;
        for(auto &x:v){
        result.push_back(x.first);
        }
        return result;
    }
};