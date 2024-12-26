class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>m;
        for(int x:arr1)
        m[x]++;
        vector<int>result;
        for(int x:arr2){
            result.insert(result.end(),m[x],x);
            m.erase(x);
        }
        vector<int>sorted;
        for(auto &x:m)
        sorted.insert(sorted.end(),x.second,x.first);
        sort(sorted.begin(),sorted.end());
        for(int x:sorted)
        result.push_back(x);
        return result;
    }
};