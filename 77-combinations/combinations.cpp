class Solution {
public:
    void dfs(vector<vector<int>> &res, vector<int> &temp, int n,int j,int k){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        for(int i=j;i<=n;i++){
            temp.push_back(i);
            dfs(res,temp,n,i+1,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int>temp;
        dfs(res,temp,n,1,k);
        return res;
    }
};