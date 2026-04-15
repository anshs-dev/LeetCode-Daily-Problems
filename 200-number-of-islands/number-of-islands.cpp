class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0,m=grid.size(),n=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(grid[i][j]=='1'){
            count++;
            q.push({i,j});
            while(!q.empty()){
                int x=q.front().first,y=q.front().second;
                q.pop();
                if(x<0 || y<0 || x>=m || y>=n || grid[x][y]=='0') continue;
                grid[x][y]='0';
                q.push({x+1,y});
                q.push({x-1,y});
                q.push({x,y+1});
                q.push({x,y-1});
            }
        }
        return count;
    }
};