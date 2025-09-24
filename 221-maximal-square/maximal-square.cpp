class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>>v(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int i=0;i<matrix.size();i++) for(int j=0;j<matrix[0].size();j++) if(matrix[i][j]=='1') v[i][j]=1;
        for(int i=1;i<matrix.size();i++) for(int j=0;j<matrix[0].size();j++) if(v[i][j]>0) v[i][j]+=v[i-1][j];
        int mxarea=0;
        for(int i=0;i<matrix.size();i++){
            vector<int>left(matrix[0].size(),0),right(matrix[0].size(),0);
            stack<int>st;
            for(int j=0;j<matrix[0].size();j++){
                while(!st.empty() && v[i][st.top()]>=v[i][j]) st.pop();
                left[j]=st.empty()?-1:st.top();
                st.push(j);
            }
            while(!st.empty()) st.pop();
            for(int j=matrix[0].size()-1;j>=0;j--){
                while(!st.empty() && v[i][st.top()]>=v[i][j]) st.pop();
                right[j]=st.empty()?matrix[0].size():st.top();
                st.push(j);
            }
            for(int j=0;j<matrix[0].size();j++){
                int width=min(v[i][j],right[j]-left[j]-1);
                mxarea=max(mxarea,width*width);
            }
        }
        return mxarea;
    }
};