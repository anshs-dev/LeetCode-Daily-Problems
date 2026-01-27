class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        queue<int>q;
        q.push(source);
        vector<bool>visited(n,false);
        while(!q.empty()){
            visited[q.front()]=true;
            if(q.front()==destination) return true;
            for(auto x:adj[q.front()]){
                if(!visited[x]) q.push(x);
            }
            q.pop();
        }
        return false;
    }
};