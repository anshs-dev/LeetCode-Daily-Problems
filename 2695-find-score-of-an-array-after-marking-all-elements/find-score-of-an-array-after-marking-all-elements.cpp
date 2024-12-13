class Solution {
public:
    long long findScore(vector<int>& nums) {
        int len = nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
        for (int i = 0; i < len; ++i) {
            minHeap.push({nums[i], i});
        }
        
        vector<bool> marked(len, false);
        long long sum = 0;

        while (!minHeap.empty()) {
            auto [value, index] = minHeap.top();
            minHeap.pop();
            
            if (marked[index]) continue;
            
            sum += value;
            marked[index] = true;
            
            if (index > 0) marked[index - 1] = true;
            if (index < len - 1) marked[index + 1] = true;
        }
        
        return sum;
    }
};
