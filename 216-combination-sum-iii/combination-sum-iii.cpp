class Solution {
public:
    void backtrack(vector<vector<int>> &res, vector<int> &temp, int k, int n, int sum, int j){
        if(sum==n && temp.size()==k){
            res.push_back(temp);
            return;
        }
        if(sum>=n || temp.size()>=k) return;
        for(int i=j;i<=9;i++){
            sum+=i;
            temp.push_back(i);
            backtrack(res,temp,k,n,sum,i+1);
            sum-=i;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int>temp;
        backtrack(res,temp,k,n,0,1);
        return res;
    }
};