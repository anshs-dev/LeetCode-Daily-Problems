class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,bool>m;
        for(int i=0;i<n;i++) m[i]=true;
        for(auto x:edges) m[x[1]]=false;
        int count=0;
        vector<int>res;
        for(auto x:m) if(x.second) res.push_back(x.first);
        return res;
    }
};