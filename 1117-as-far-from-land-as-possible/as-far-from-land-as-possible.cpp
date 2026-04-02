class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int m=grid.size(),n=grid[0].size(),water=0;
        for(int i=0;i<m;i++) for(int j=0;j<n;j++){
            if(grid[i][j]==1) q.push({i,j});
            else water++;
        }
        if(water==0 || q.empty()) return -1;

        vector<pair<int,int>>dir={{1,0},{0,1},{-1,0},{0,-1}};
        int count=-1;

        while(!q.empty()){
            int size=q.size();
            count++;
            while(size--){
                int i=q.front().first,j=q.front().second;
                q.pop();
                for(auto a:dir){
                    int x=i+a.first,y=j+a.second;
                    if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==0){
                        grid[x][y]=1;
                        q.push({x,y});
                    }
                }
            }
        }
        return count;
    }
};