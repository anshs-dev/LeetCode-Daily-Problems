class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<pair<int,char>>maxHeap;
        priority_queue<pair<int,pair<int,char>>,vector<pair<int,pair<int,char>>>,greater<pair<int,pair<int,char>>>>minHeap;
        unordered_map<char,int>m;
        for(auto x:tasks) m[x]++;
        for(auto x:m) maxHeap.push({x.second,x.first});
        int curr=1;
        while(!maxHeap.empty() || !minHeap.empty()){
            if(!minHeap.empty() && minHeap.top().first==curr){
                maxHeap.push({minHeap.top().second.first,minHeap.top().second.second});
                minHeap.pop();
            }
            if(!maxHeap.empty()){
                int freq=maxHeap.top().first;
                char c=maxHeap.top().second;
                maxHeap.pop();
                if(freq>1) minHeap.push({curr+n+1,{freq-1,c}});    
            }
            curr++;
        }
        return curr-1;
    }
};