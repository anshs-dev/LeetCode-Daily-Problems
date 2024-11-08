class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>maxHeap;
        for(const auto &row:matrix){
            for(int n:row){
                maxHeap.push(n);
                if(maxHeap.size()>k)maxHeap.pop();
            }
        }
        return maxHeap.top();
       
    }
};