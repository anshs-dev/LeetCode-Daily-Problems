class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1) return -1;
        int m=grid.size(),n=grid[0].size();
        vector<pair<int,int>>dir={{1,0},{0,1},{1,1},{-1,-1},{-1,0},{0,-1},{1,-1},{-1,1}};
        queue<pair<int,int>>q;
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        int count=0;
        q.push({0,0});
        visited[0][0]=true;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto [x,y]=q.front();
                if(x==m-1 && y==n-1) return count+1;
                q.pop();
                for(auto d:dir){
                    int dx=x+d.first,dy=y+d.second;
                    if(dx>=0 && dx<m && dy>=0 && dy<n && !visited[dx][dy] && grid[dx][dy]!=1){
                        q.push({dx,dy});
                        visited[dx][dy]=true;
                    }
                }
            }
            count++;
        }
        return -1;
    }
};