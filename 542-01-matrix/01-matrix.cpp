class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<bool>> visited(mat.size(),vector<bool>(mat[0].size(),false));
        queue<pair<int,int>>q;
        for(int i=0;i<mat.size();i++) for(int j=0;j<mat[0].size();j++) if(mat[i][j]==0){
            visited[i][j]=true;
            q.push({i,j});
        }
        int curr=1;
        vector<pair<int,int>>v={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            int size=q.size();
            while(size--){
                for(int i=0;i<4;i++){
                    int x=q.front().first+v[i].first,y=q.front().second+v[i].second;
                    if(x>=0 && x<mat.size() && y>=0 && y<mat[0].size() && !visited[x][y]){
                        mat[x][y]=curr;
                        visited[x][y]=true;
                        q.push({x,y});
                    }
                }
                q.pop();
            }
            curr++;
        }
        return mat;
    }
};