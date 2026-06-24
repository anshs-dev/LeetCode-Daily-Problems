class Solution {
public:
    int res=0;
    void backtrack(int n, vector<bool> &cols, vector<bool> &diag1, vector<bool> &diag2, int i){
        if(i==n) res++;
        for(int j=0;j<n;j++){
            if(!cols[j] && !diag1[i+j] && !diag2[n+i-j-1]){
                cols[j]=true;
                diag1[i+j]=true;
                diag2[n+i-j-1]=true;
                backtrack(n,cols,diag1,diag2,i+1);
                cols[j]=false;
                diag1[i+j]=false;
                diag2[n+i-j-1]=false;
            }
        }
    }
    int totalNQueens(int n) {
        vector<bool> cols(n,false),diag1(2*n-1,false),diag2(2*n-1,false);
        backtrack(n,cols,diag1,diag2,0);
        return res;
    }
};