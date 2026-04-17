class Solution {
public:
    void dfs(int prev,vector<int> &res, unordered_map<int,vector<int>> &m,int curr){
        for(int x:m[curr]){
            if(x==prev) continue;
            res.push_back(x);
            dfs(curr,res,m,x);
            break;
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>> m;
        for(auto x:adjacentPairs){
            m[x[0]].push_back(x[1]);
            m[x[1]].push_back(x[0]);
        }
        int first=-1;
        for(auto x:m) if(x.second.size()==1){
            first=x.first;
            break;
        }
        vector<int>res;
        res.push_back(first);
        //cout<<first;
        dfs(first,res,m,first);
        return res;
    }
};