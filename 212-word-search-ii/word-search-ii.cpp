class Solution {
public:
    struct TrieNode{
        TrieNode* child[26]={};
        bool isEnd=false;
        TrieNode* insert(char t){
            TrieNode* curr=this;
            int idx=t-'a';
            if(!curr->child[idx]) curr->child[idx]=new TrieNode();
            curr=curr->child[idx];
            return curr;
        }
        bool find(string temp){
            TrieNode* curr=this;
            for(char x:temp){
                int idx=x-'a';
                if(!curr->child[idx]) return false;
                curr=curr->child[idx];
            }
            return true;
        }
    };
    void dfs(TrieNode* curr, vector<vector<char>> &grid, int i, int j, int m, int n, int count){
        if(count>=10 || i<0 || j<0 || i>=m || j>=n || grid[i][j]=='1') return;
        char temp=grid[i][j];
        if(!curr->child[temp-'a']) curr->child[temp-'a']=new TrieNode();
        grid[i][j]='1';
        dfs(curr->child[temp-'a'],grid,i+1,j,m,n,count+1);
        dfs(curr->child[temp-'a'],grid,i,j+1,m,n,count+1);
        dfs(curr->child[temp-'a'],grid,i-1,j,m,n,count+1);
        dfs(curr->child[temp-'a'],grid,i,j-1,m,n,count+1);
        grid[i][j]=temp;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root=new TrieNode();
        for(int i=0;i<board.size();i++) for(int j=0;j<board[0].size();j++) dfs(root,board,i,j,board.size(),board[0].size(),0);
        vector<string> res;
        for(auto x:words){
            if(root->find(x)) res.push_back(x);
        }
        return res;
        
    }
};