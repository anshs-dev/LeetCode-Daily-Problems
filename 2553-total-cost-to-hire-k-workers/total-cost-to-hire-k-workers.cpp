class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>>minHeap1,minHeap2;
        int i=0,j;
        for(i=0;i<candidates && i<costs.size();i++) minHeap1.push(costs[i]);
        for(j=costs.size()-1;j>=costs.size()-candidates && j>=i;j--) minHeap2.push(costs[j]);
        long long ans=0;
        //cout<<i<<" "<<j;
        while(k--){
            int num=INT_MAX;
            if(minHeap1.empty()){
                num=minHeap2.top();
                minHeap2.pop();
            }
            else if(minHeap2.empty()){
                num=minHeap1.top();
                minHeap1.pop();
            }
            else{
                if(minHeap1.top()<=minHeap2.top()){
                    num=minHeap1.top();
                    minHeap1.pop();
                    if(i<=j){
                        minHeap1.push(costs[i]);
                        i++;
                    }
                }
                else{
                    num=minHeap2.top();
                    minHeap2.pop();
                    if(j>=i){
                        minHeap2.push(costs[j]);
                        j--;
                    }
                }
            }
            ans+=num;
        }
        return ans;
    }
};