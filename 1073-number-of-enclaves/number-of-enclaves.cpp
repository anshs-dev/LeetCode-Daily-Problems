class Solution {
public:
    void bfs(vector<vector<int>> &grid, int i, int j){
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int x=q.front().first,y=q.front().second;
            q.pop();
            if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]==0) continue;
            grid[x][y]=0;
            q.push({x+1,y});
            q.push({x,y+1});
            q.push({x-1,y});
            q.push({x,y-1});
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        for(int i=0;i<m;i++) if(grid[i][0]==1) bfs(grid,i,0);
        for(int i=0;i<m;i++) if(grid[i][n-1]==1) bfs(grid,i,n-1);
        for(int i=0;i<n;i++) if(grid[0][i]==1) bfs(grid,0,i);
        for(int i=0;i<n;i++) if(grid[m-1][i]==1) bfs(grid,m-1,i);
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(grid[i][j]==1) count++;
        return count;
    }
};