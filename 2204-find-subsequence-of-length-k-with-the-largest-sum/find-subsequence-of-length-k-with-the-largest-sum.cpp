class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>maxHeap;
        for(int i=0;i<nums.size();i++){
            maxHeap.push({nums[i],i});
        }
        vector<pair<int,int>>result;
        while(k--){
            result.push_back(maxHeap.top());
            maxHeap.pop();
        }
        sort(result.begin(),result.end(),[](const pair<int,int>a,const pair<int,int>b){
            return a.second>b.second;
        });
        vector<int>lastresult;
        for(int i=result.size()-1;i>=0;i--)
        lastresult.push_back(result[i].first);
        return lastresult;
    }
};