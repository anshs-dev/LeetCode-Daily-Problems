class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        vector<pair<int,int>>dir={{1,0},{0,1},{-1,0},{0,-1}};
        queue<pair<int,pair<int,int>>>q;
        if(grid[0][0]==1) health--;
        q.push({health,{0,0}});
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>best(m,vector<int>(n,-1));
        best[0][0]=health;
        while(!q.empty()){
            int x=q.front().second.first,y=q.front().second.second;
            int h=q.front().first;
            q.pop();
            //cout<<x<<" "<<y<<" "<<h<<endl;
            if(x==m-1 && y==n-1 && h>0) return true;
            for(auto a:dir){
                int dx=x+a.first,dy=y+a.second,nh=h;
                if(dx>=0 && dy>=0 && dx<m && dy<n){
                    if(grid[dx][dy]==1) nh=h-1;
                    if(nh<=0) continue;
                    if(nh>best[dx][dy]){
                        best[dx][dy]=nh;
                        q.push({nh,{dx,dy}});
                    }
                }
            }
        }
        return false;
    }
};