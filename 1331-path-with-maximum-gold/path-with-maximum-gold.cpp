class Solution {
public:
    int max_sum=INT_MIN;
    void backtrack(vector<vector<int>> &grid,vector<vector<bool>> &visited,int i,int j,int sum){
        if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0 || visited[i][j] || !grid[i][j]){
            max_sum=max(max_sum,sum);
            return;
        }
        sum+=grid[i][j];
        visited[i][j]=true;
        backtrack(grid,visited,i+1,j,sum);
        backtrack(grid,visited,i,j+1,sum);
        backtrack(grid,visited,i-1,j,sum);
        backtrack(grid,visited,i,j-1,sum);
        sum-=grid[i][j];
        visited[i][j]=false;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>> check(m,vector<bool>(n,false));
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(grid[i][j]) backtrack(grid,check,i,j,0);
        return max_sum==INT_MIN?0:max_sum;
    }
};