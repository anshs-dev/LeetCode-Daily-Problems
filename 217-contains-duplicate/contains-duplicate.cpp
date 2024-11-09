class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        priority_queue<int>maxHeap(nums.begin(),nums.end());
        int first=maxHeap.top();
        maxHeap.pop();
        while(maxHeap.size()!=0){
        int second=maxHeap.top();
        maxHeap.pop();
        if(first==second)
        return 1;
        else
        first=second;
        }
        return 0;
    }
};