class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>maxHeap(gifts.begin(),gifts.end());
        while(k--){
            int max_gift=maxHeap.top();
            maxHeap.pop();
            maxHeap.push(sqrt(max_gift));
        }
        long long sum=0;
       while(!maxHeap.empty()){
        sum+=maxHeap.top();
        maxHeap.pop();
       }
        return sum;
    }
};