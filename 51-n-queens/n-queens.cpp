class Solution {
public:
    vector<vector<string>> v2;
    void backtrack(int n, vector<string> &grid, vector<bool> &cols, vector<bool> &diag1, vector<bool> &diag2, int i){
        if(i==n){
            v2.push_back(grid);
            return;
        }
        for(int j=0;j<n;j++){
            if(!cols[j] && !diag1[i+j] && !diag2[n+i-j-1]){
                grid[i][j]='Q';
                cols[j]=true;
                diag1[i+j]=true;
                diag2[n+i-j-1]=true;
                backtrack(n,grid,cols,diag1,diag2,i+1);
                grid[i][j]='.';
                cols[j]=false;
                diag1[i+j]=false;
                diag2[n+i-j-1]=false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string temp="";
        for(int i=0;i<n;i++) temp+=".";
        vector<string>v;
        for(int i=0;i<n;i++) v.push_back(temp);
        vector<bool> cols(n,false),diag1(2*n-1,false),diag2(2*n-1,false);
        backtrack(n,v,cols,diag1,diag2,0);
        return v2;
    }
};