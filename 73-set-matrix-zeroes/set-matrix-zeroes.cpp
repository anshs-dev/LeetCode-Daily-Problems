class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool colero=false,rorero=false;
        int rows=matrix.size();
        int columns=matrix[0].size();
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0)
            colero=true;
        }
        for(int i=0;i<columns;i++){
            if(matrix[0][i]==0)
            rorero=true;
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<columns;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<columns;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j]=0;
            }
        }
        if(colero){
            for(int i=0;i<rows;i++){
                matrix[i][0]=0;
            }
        }
        if(rorero){
            for(int i=0;i<columns;i++){
            matrix[0][i]=0;
            }
        }
    }
};