class Solution {
public:
    vector<vector<int>> colorGrid(int m, int n, vector<vector<int>>& sources) {
        sort(sources.begin(),sources.end(),[](const auto &a, const auto &b){
            return a[2]>b[2];
        });
        queue<vector<int>>q;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        vector<vector<int>> grid(m,vector<int>(n,0));
        for(auto x:sources) q.push(x);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto a=q.front();
                q.pop();
                if(a[0]<0 || a[1]<0 || a[0]>=m || a[1]>=n) continue;
                int x=a[0],y=a[1],color=a[2];
                if(grid[x][y]==0) grid[x][y]=color;
                else continue;
                for(auto d:dir){
                    int dx=x+d.first,dy=y+d.second;
                    if(dx>=0 && dy>=0 && dx<m && dy<n && grid[dx][dy]==0) q.push({dx,dy,color});
                }
            }
        }
        return grid;
    }
};