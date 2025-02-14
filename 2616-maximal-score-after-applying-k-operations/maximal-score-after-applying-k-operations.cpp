class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0;
        priority_queue<long long>maxHeap(nums.begin(),nums.end());
        while(k--){
            long long ele=maxHeap.top();
            maxHeap.pop();
            score+=ele;
            if(ele%3==0) maxHeap.push((long long)ele/3);
            else maxHeap.push((long long)(ele/3)+1);
        }
        return score;
    }
};