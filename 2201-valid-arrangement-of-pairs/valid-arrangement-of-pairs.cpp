class Solution {
public:
    void dfs(unordered_map<int,vector<int>> &m, vector<vector<int>> &result, int prev){
        while(!m[prev].empty()){
            int curr=m[prev].back();
            m[prev].pop_back();
            dfs(m,result,curr);
            result.push_back({prev,curr});
        }
    }
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int,vector<int>>m;
        unordered_map<int,pair<int,int>> m2;
        for(auto x:pairs){
            m2[x[0]].second++;
            m2[x[1]].first++;
            m[x[0]].push_back(x[1]);
        }
        vector<vector<int>> result;
        bool found=false;
        for(auto x:m2) if(x.second.second==x.second.first+1) {
            dfs(m,result,x.first);
            found=true;
            break;
        }
        if(!found) dfs(m,result,pairs[0][0]);
        reverse(result.begin(),result.end());
        return result;
    }
};