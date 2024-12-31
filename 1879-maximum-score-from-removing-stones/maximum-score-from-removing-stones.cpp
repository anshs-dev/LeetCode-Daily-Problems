class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>maxHeap;
        maxHeap.push(a);
        maxHeap.push(b);
        maxHeap.push(c);
        int count=0;
        while(maxHeap.size()>1){
            int ele1=maxHeap.top();
            maxHeap.pop();
            int ele2=maxHeap.top();
            maxHeap.pop();
            if(ele1>1)
            maxHeap.push(ele1-1);
            if(ele2>1)
            maxHeap.push(ele2-1);
            count++;
        }
        return count;

    }
};