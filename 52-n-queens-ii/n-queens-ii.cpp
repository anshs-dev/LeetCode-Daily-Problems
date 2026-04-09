class Solution {
public:
    int count=0;
    void backtrack(vector<bool> &col, vector<bool> &diag1, vector<bool> &diag2, int i, int j, int n){
        if(i==n){
            count++;
            return;
        }
        for(int k=0;k<n;k++){
            if(!col[k] && !diag1[i+k] && !diag2[n+i-k]){
                col[k]=true;
                diag1[i+k]=true;
                diag2[i+n-k]=true;
                backtrack(col,diag1,diag2,i+1,j,n);
                col[k]=false;
                diag1[i+k]=false;
                diag2[i+n-k]=false;
            }
        }
    }
    int totalNQueens(int n) {
        vector<bool>diag1(2*n,false),diag2(2*n,false),col(n,false);
        backtrack(col,diag1,diag2,0,0,n);
        return count;
    }
};