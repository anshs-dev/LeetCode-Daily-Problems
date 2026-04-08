class Solution {
public:
    void dfs(int i, int j, queue<pair<int,int>> &q,vector<vector<int>> &grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid.size() || grid[i][j]==0 || grid[i][j]==4) return;
        q.push({i,j});
        grid[i][j]=4;
        dfs(i+1,j,q,grid);
        dfs(i,j+1,q,grid);
        dfs(i-1,j,q,grid);
        dfs(i,j-1,q,grid);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        bool first=true;
        for(int i=0;i<grid.size() && first;i++) for(int j=0;j<grid.size() && first;j++) if(grid[i][j]==1){
            dfs(i,j,q,grid);
            first=false;
        }
        int dist=0;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            int size=q.size();
            while(size--){
                for(auto x:dir){
                    int dx=q.front().first+x.first,dy=q.front().second+x.second;
                    if(dx<0 || dy<0 || dx>=grid.size() || dy>=grid.size() || grid[dx][dy]==2) continue;
                    if(grid[dx][dy]==1) return dist;
                    grid[dx][dy]=2;
                    q.push({dx,dy});
                }
                q.pop();
            }
            dist++;
        }
        return -1;
    }
}; 