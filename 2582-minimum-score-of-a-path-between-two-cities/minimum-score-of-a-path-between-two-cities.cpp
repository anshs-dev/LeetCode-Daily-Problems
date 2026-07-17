class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int,vector<vector<int>>>m;
        for(auto x:roads){ 
            m[x[0]].push_back({x[1],x[2]});
            m[x[1]].push_back({x[0],x[2]});
        }
        int res=INT_MAX;
        queue<int>q;
        q.push(1);
        vector<bool>visited(n+1,false);
        visited[0]=true;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto x:m[curr]){
                res=min(res,x[1]);
                if(!visited[x[0]]){
                    q.push(x[0]);
                    visited[x[0]]=true;
                }
            }
        }
        return res;
    }
};