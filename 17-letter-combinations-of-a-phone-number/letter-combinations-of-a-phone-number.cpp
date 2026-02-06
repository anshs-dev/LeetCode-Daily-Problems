class Solution {
public:
    void backtrack(vector<string> &res,vector<string> &v,vector<vector<bool>> &check,string &temp,int i, int j){
        if(temp.size()==v.size()){
            res.push_back(temp);
            return;
        }
        for(int j=0;i<v.size() && j<v[i].size();j++){
            if(!check[i][j]){
                check[i][j]=!check[i][j];
                temp+=v[i][j];
                backtrack(res,v,check,temp,i+1,j);
                check[i][j]=!check[i][j];
                temp.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        vector<string>v;
        for(char x:digits) v.push_back(m[x-'0']);
        vector<vector<bool>> check;
        vector<string> res;
        for(auto x:v) check.push_back(vector<bool>(x.size(),false));
        string result="";
        backtrack(res,v,check,result,0,0);
        return res;
    }
};