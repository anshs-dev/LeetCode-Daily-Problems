class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>maxHeap;
        for(int x:amount)
        maxHeap.push(x);
        int count=0;
        while(4){
            int ele1=maxHeap.top();
            maxHeap.pop();
            if(ele1==0)
            return count;
            int ele2=maxHeap.top();
            maxHeap.pop();
            if(ele2==0)
            return count+ele1;
            maxHeap.push(ele1-1);
            maxHeap.push(ele2-1);
            count++;
        }
        return count;
    }
};