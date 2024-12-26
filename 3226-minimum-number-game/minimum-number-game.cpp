class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>minHeap(nums.begin(),nums.end());
        vector<int>result;
        while(!minHeap.empty()){
            int first=minHeap.top();
            minHeap.pop();
            result.push_back(minHeap.top());
            minHeap.pop();
            result.push_back(first);
        }
        return result;
    }
};