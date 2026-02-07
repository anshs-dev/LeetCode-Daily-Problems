class Solution {
public:
    void dfs(vector<vector<int>> &result, vector<int> &candidates, int target, vector<int> &curr, int sum,int i){
        if(sum==target){
            result.push_back(curr);
            return;
        }
        if(sum>target || i>=candidates.size()) return;
        sum+=candidates[i];
        curr.push_back(candidates[i]);
        dfs(result,candidates,target,curr,sum,i+1);
        sum-=candidates[i];
        curr.pop_back();
        while(i<candidates.size()-1 && candidates[i]==candidates[i+1]) i++;
        dfs(result,candidates,target,curr,sum,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int>curr;
        dfs(result,candidates,target,curr,0,0);
        return result;
    }
};