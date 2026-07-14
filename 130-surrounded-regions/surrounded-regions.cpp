class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && board[i][j]=='O'){
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
        while(!q.empty()){
            int x=q.front().first,y=q.front().second;
            q.pop();
            board[x][y]='9';
            for(auto a:dir){
                int dx=x+a.first,dy=y+a.second;
                if(dx>=0 && dy>=0 && dx<m && dy<n && board[dx][dy]=='O') q.push({dx,dy});
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='9') board[i][j]='O';
            }
        }
    }
};