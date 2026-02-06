class Solution {
public:
    void dfs(vector<vector<int>> &res, vector<int> &candidates, vector<int> &temp,int sum,int target,int j){
        if(sum==target){
            res.push_back(temp);
            return;
        }
        for(int i=j;sum<target && i<candidates.size();i++){
            while(i<candidates.size()-1 && candidates[i]==candidates[i+1]) i++;
            sum+=candidates[i];
            temp.push_back(candidates[i]);
            dfs(res,candidates,temp,sum,target,i);
            //dfs(res,candidates,temp,sum,target,i+1);
            sum-=candidates[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int sum=0;
        vector<vector<int>> res;
        vector<int> temp;
        dfs(res,candidates,temp,sum,target,0);
        return res;
    }
};