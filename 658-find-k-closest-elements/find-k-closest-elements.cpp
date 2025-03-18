class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
        for(int a:arr) minHeap.push({abs(x-a),a});
        vector<int>result;
        while(k--){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        sort(result.begin(),result.end());
        return result;
    }
};