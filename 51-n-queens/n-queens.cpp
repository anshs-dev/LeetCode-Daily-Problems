class Solution {
public:
    void backtrack(vector<vector<string>> &res,vector<string> &v,vector<bool> &col,vector<bool> &diag1, vector<bool> &diag2,int i, int n){
        if(i==n){
            res.push_back(v);
            return;
        }
        for(int k=0;k<n;k++){
            if(!col[k] && !diag1[i+k] && !diag2[i+n-k]){
                v[i][k]='Q';
                col[k]=true;
                diag1[i+k]=true;
                diag2[i+n-k]=true;
                backtrack(res,v,col,diag1,diag2,i+1,n);
                v[i][k]='.';
                col[k]=false;
                diag1[i+k]=false;
                diag2[i+n-k]=false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        string temp="";
        vector<string>v;
        for(int i=0;i<n;i++) temp+=".";
        for(int i=0;i<n;i++) v.push_back(temp);
        vector<bool> col(n,false),diag1(2*n-1,false),diag2(2*n-1,false);
        backtrack(res,v,col,diag1,diag2,0,n);
        return res;
    }
};