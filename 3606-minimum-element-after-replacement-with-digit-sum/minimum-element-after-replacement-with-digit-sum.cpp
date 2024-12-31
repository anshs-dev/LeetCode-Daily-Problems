class Solution {
public:
    int minElement(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>minHeap;
        for(int x:nums){
            int temp=x,sum=0;
            while(temp!=0){
                sum+=temp%10;
                temp/=10;
            }
            minHeap.push(sum);
        }
        return minHeap.top();
    }
};