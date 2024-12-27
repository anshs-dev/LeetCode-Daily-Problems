class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>v;
        int min_sum=INT_MAX;
        for(int i=1;i<arr.size();i++){
        min_sum=min(min_sum,abs(arr[i]-arr[i-1]));
        }
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])==min_sum)
            v.push_back({arr[i-1],arr[i]});
        }
        return v;
    }
};