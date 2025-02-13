class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>minHeap(nums.begin(),nums.end());
        int count=0;
        while(minHeap.size()>=2 && minHeap.top()<k){
            long long one=minHeap.top();
            minHeap.pop();
            long long two=minHeap.top();
            minHeap.pop();
            minHeap.push(min(one,two)*2+max(one,two));
            count++;
        }
        return count;
    }
};