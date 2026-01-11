class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>>v(m,vector<int>(n,0));
        for(int i=0;i<n;i++) v[0][i]=matrix[0][i]-'0';
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1') v[i][j]=(matrix[i][j]-'0')+v[i-1][j];
            }
        }
        int res=0;
        for(int i=0;i<m;i++){
            vector<int>left(n,-1),right(n,n);
            stack<int>st;
            for(int j=n-1;j>=0;j--){
                while(!st.empty() && v[i][st.top()]>=v[i][j]) st.pop();
                if(!st.empty()) right[j]=st.top();
                st.push(j);
            }
            while(!st.empty()) st.pop();
            for(int j=0;j<n;j++){
                while(!st.empty() && v[i][st.top()]>=v[i][j]) st.pop();
                if(!st.empty()) left[j]=st.top();
                st.push(j);
            }
            for(int j=0;j<n;j++) res=max(res,(right[j]-left[j]-1)*v[i][j]);
        }
        return res;
    }
};