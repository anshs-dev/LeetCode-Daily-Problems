class Solution {
public:
    bool search_row(vector<vector<int>> &matrix, int row, int target) {
    return count(matrix[row].begin(), matrix[row].end(), target) >= 2;
}
    bool search_col(vector<vector<int>>&v,int col){
        int count=0;
        for(int i=0;i<v.size();i++){
        if(v[i][col]==1)
        count++;
        }
        return count>=2;
    }
    int countServers(vector<vector<int>>& grid) {
        int total_count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    if(search_col(grid,j) || search_row(grid,i,1))
                    total_count++;
                }
            }
        }
        return total_count;
    }
};