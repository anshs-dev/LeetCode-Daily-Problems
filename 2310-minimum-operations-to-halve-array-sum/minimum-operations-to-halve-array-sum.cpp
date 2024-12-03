class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>maxHeap;
        double sum=0;
        for(int x:nums){
        maxHeap.push(x);
        sum+=x;
        }
        double temp=sum;
        int count=0;
        while(temp>(sum/2)){
            double h=maxHeap.top();
            maxHeap.pop();
            h=h/2;
            temp-=h;
            maxHeap.push(h);
            count++;
        }
        return count;

    }
};