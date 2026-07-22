class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<matrix.size();i++){
            unordered_set<int>st;
            for(int j=0;j<n;j++){
                if(!st.count(matrix[i][j]) && matrix[i][j]>=1 && matrix[i][j]<=n) st.insert(matrix[i][j]);
                else return false;
            }
        }
        for(int i=0;i<matrix.size();i++){
            unordered_set<int>st;
            for(int j=0;j<n;j++){
                if(!st.count(matrix[j][i]) && matrix[j][i]>=1 && matrix[j][i]<=n) st.insert(matrix[j][i]);
                else return false;
            }
        }
        return true;
    }
};