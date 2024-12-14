class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>maxHeap;
        for(int i=0;i<k;i++){
            maxHeap.push({nums[i],i});
        }
        vector<int>result;
        result.push_back(maxHeap.top().first);
        for(int i=k;i<nums.size();i++){
            maxHeap.push({nums[i],i});
            while(maxHeap.top().second<i-k+1)
            maxHeap.pop();
            result.push_back(maxHeap.top().first);
        }
        return result;
    }
};