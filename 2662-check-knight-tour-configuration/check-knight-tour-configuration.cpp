class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return false;
        vector<pair<int,int>>dir={{2,1},{2,-1},{1,2},{-1,2},{-2,-1},{-2,1},{-1,-2},{1,-2}};
        queue<pair<int,int>>q;
        q.push({0,0});
        int curr=1;
        while(!q.empty()){
            for(auto a:dir){
                int x=q.front().first+a.first,y=q.front().second+a.second;
                if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size() && grid[x][y]==curr){
                    curr++;
                    q.push({x,y});
                }
            }
            q.pop();
        }
        return curr==grid.size()*grid.size()?true:false;
    }
};