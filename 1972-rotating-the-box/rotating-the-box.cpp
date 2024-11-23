class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int rows=box.size();
        int columns=box[0].size();
        for(auto &s:box){   
        int size=s.size()-1;
        int empty_pos=size;
        for(int i=size;i>=0;i--){
            if(s[i]=='*'){
                empty_pos=i-1;
            }
            else if(s[i]=='#'){
                s[i]='.';
                s[empty_pos]='#';
                empty_pos--;
            }
            }
    
        
        }
        vector<vector<char>>transposed(columns,vector<char>(rows));
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                transposed[j][i]=box[i][j];
            }
        }
          for (auto& row : transposed) {
        reverse(row.begin(), row.end());
    }

        return transposed;
    }
};