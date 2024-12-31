class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxHeap(piles.begin(),piles.end());
        int stones=0;
        while(k--){
            int ele=maxHeap.top()-maxHeap.top()/2;
            maxHeap.pop();
            maxHeap.push(ele);
        }
        while(!maxHeap.empty()){
            stones+=maxHeap.top();
            maxHeap.pop();
        }
        return stones;
    }
};