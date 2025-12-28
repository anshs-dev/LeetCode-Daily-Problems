class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows=grid.size(),columns=grid[0].size(),row=0,col=columns-1,count=0;
        while(row<rows && col>=0){
            if(grid[row][col]<0){
                count+=rows-row;
                col--;
            }
            else row++;
        }
        return count;
    }
};