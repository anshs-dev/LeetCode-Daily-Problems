class Solution {
public:
    bool dfs(vector<vector<bool>> &visited,vector<vector<char>> &board,string word, int i, int j, string temp){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || visited[i][j]) return false;
        temp+=board[i][j];
        visited[i][j]=true;
        if(temp.size()==word.size() && temp==word) return true;
        if(temp.back()!=word[temp.length()-1]){
            visited[i][j]=false;
            return false;
        }
        bool a=dfs(visited,board,word,i+1,j,temp);
        bool b=dfs(visited,board,word,i,j-1,temp);
        bool c=dfs(visited,board,word,i-1,j,temp);
        bool d=dfs(visited,board,word,i,j+1,temp);
        visited[i][j]=false;
        return a || b || c || d;
    }
    bool exist(vector<vector<char>>& board, string word) {
        string temp="";
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0] && dfs(visited,board,word,i,j,temp)) return true;
            }
        }
        return false;
    }
};