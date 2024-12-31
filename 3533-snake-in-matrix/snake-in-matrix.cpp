class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>>v(n,vector<int>(n,0));
        int start=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            v[i][j]=start;
            start++;
            }
        }
        pair<int,int>whereru;
        whereru.first=0;
        whereru.second=0;
        for(string x:commands){
            if(x=="RIGHT")
            whereru.second+=1;
            else if(x=="LEFT")
            whereru.second-=1;
            else if(x=="UP")
            whereru.first-=1;
            else
            whereru.first+=1;
        }
        return v[whereru.first][whereru.second];
    }
};