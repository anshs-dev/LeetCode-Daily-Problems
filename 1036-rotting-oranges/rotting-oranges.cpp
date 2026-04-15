class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int count=0,fresh=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++) for(int j=0;j<n;j++){
            if(grid[i][j]==1) fresh++;
            else if(grid[i][j]==2) q.push({i,j});
        }
        vector<pair<int,int>>dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            bool rotten=false;
            int size=q.size();
            while(size--){
                for(auto x:dir){
                    int dx=q.front().first+x.first,dy=q.front().second+x.second;
                    if(dx<0 || dy<0 || dx>=m || dy>=n || grid[dx][dy]!=1) continue;
                    fresh--;
                    rotten=true;
                    grid[dx][dy]=2;
                    q.push({dx,dy});
                }
                q.pop();
            }
            if(rotten) count++;
        }
        return fresh==0?count:-1;
    }
};