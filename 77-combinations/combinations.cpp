class Solution {
public:
    vector<vector<int>> res;
    void backtrack(int n, int k, vector<int>& curr, int i){
        if(curr.size()==k){
            res.push_back(curr);
            return;
        }
        for(int j=i;j<=n;j++){
            curr.push_back(j);
            backtrack(n,k,curr,j+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        backtrack(n,k,curr,1);
        return res;
    }
};