class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int low=0;
        int high=rows*columns-1;
        while(low<=high){
            int mid=(low+high)/2;
            int mid_element=matrix[mid/columns][mid%columns];
            if(mid_element==target){
                return true;
            }
            else if(mid_element>target)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
};