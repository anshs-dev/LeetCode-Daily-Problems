class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, vector<vector<bool>> &visited, int i, int j, int m, int n, int k){
        if(k==word.size()) return true;
        if(i<0 || i>=m || j<0 || j>=n || visited[i][j] || board[i][j]!=word[k]) return false;
        visited[i][j]=true;
        bool a=dfs(board,word,visited,i+1,j,m,n,k+1); 
        bool b=dfs(board,word,visited,i,j+1,m,n,k+1);  
        bool c=dfs(board,word,visited,i-1,j,m,n,k+1);  
        bool d=dfs(board,word,visited,i,j-1,m,n,k+1);
        visited[i][j]=false;
        return a || b || c || d;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){ 
            for(int j=0;j<n;j++){
                vector<vector<bool>> visited(m,vector<bool>(n,false));
                if(board[i][j]==word[0] && dfs(board,word,visited,i,j,m,n,0)) return true;
            }
        }
        return false;
    }
};