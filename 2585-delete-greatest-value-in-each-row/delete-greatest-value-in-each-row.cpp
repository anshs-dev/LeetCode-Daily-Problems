class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int len=grid[0].size()-1;
        for(auto &x:grid){
            sort(x.begin(),x.end());
        }
        int count=0;
        while(len>=0){
            priority_queue<int>maxHeap;
            for(auto x:grid){
            maxHeap.push(x[len]);
            }
            count+=maxHeap.top();
            len--;
        }
        return count;
    }
};