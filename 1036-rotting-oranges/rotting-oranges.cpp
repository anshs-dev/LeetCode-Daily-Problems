class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>>v={{1,0},{0,1},{-1,0},{0,-1}};
        queue<pair<int,int>>q;
        int m=grid.size(),n=grid[0].size(),count=0,fresh=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j});
                else if(grid[i][j]==1) fresh++;
            }
        }
        while(!q.empty()){
            int size=q.size();
            bool rotten=false;
            while(size--){
            for(int i=0;i<4;i++){
                int x=q.front().first+v[i].first,y=q.front().second+v[i].second;
                if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==1){
                    rotten=true;
                    grid[x][y]=2;
                    fresh--;
                    q.push({x,y});
                }
            }
            q.pop();
        }
            if(rotten) count++;
        }
        return fresh!=0?-1:count;
    }
};