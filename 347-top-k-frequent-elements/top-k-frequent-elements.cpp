class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
    unordered_map<int,int>freq;
    for(int n:nums)
    freq[n]++;
    for(auto& [num,fre] : freq){
        minheap.push({fre,num});
        if(minheap.size()>k)
        minheap.pop();
    }
    vector<int>result;
    while(!minheap.empty()){
        result.push_back(minheap.top().second);
        minheap.pop();
    }
    return result;


    }
};