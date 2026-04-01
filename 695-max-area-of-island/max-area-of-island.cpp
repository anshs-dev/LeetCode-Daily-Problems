class Solution {
public:
    int dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int count, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 || visited[i][j]) return 0;
        visited[i][j]=true;
        return 1+dfs(grid,visited,count,i+1,j)+dfs(grid,visited,count,i,j+1)+dfs(grid,visited,count,i-1,j)+dfs(grid,visited,count,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),max_count=0;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !visited[i][j]) max_count=max(max_count,dfs(grid,visited,0,i,j));
            }
        }
        return max_count;
    }
};