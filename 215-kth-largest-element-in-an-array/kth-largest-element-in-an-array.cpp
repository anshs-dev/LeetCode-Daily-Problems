class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxHeap(nums.begin(),nums.end());
        int element;
        while(k>1){
        maxHeap.pop();
        k--;
        }
        element=maxHeap.top();
        return element;
    }
};