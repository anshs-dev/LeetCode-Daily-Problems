class Solution {
public:
    void dfs(unordered_map<string,multiset<string>> &m, string prev, vector<string> &res){
        while(!m[prev].empty()){
            auto it=m[prev].begin();
            string s=*it;
            m[prev].erase(it);
            dfs(m,s,res);
        }
        res.push_back(prev);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,multiset<string>>m;
        for(auto x:tickets) m[x[0]].insert(x[1]);
        vector<string>res;
        dfs(m,"JFK",res);
        reverse(res.begin(),res.end());
        return res;
    }
};