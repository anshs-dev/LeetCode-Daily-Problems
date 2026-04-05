class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int first=0,second=INT_MAX;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> minHeap;
        int max_ele=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            minHeap.push({nums[i][0],{i,0}});
            max_ele=max(max_ele,nums[i][0]);
        }
        while(!minHeap.empty()){
            int num=minHeap.top().first;
            int row=minHeap.top().second.first;
            int idx=minHeap.top().second.second;
            if(max_ele-num<second-first || (num<first && max_ele-first==second-first)){
                second=max_ele;
                first=num;
            }
            minHeap.pop();
            idx++;
            if(idx>=nums[row].size()) break;
            minHeap.push({nums[row][idx],{row,idx}});
            max_ele=max(max_ele,nums[row][idx]);
        }
        return {second,first};
    }
};