class Solution {
public:
    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> &curr, int target, int sum, int i){
        if(sum==target){
            res.push_back(curr);
            return;
        }
        if(i==nums.size() || sum>target) return;
        sum+=nums[i];
        curr.push_back(nums[i]);
        dfs(nums,res,curr,target,sum,i+1);
        while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
        sum-=nums[i];
        curr.pop_back();
        dfs(nums, res, curr, target, sum, i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int>curr;
        dfs(candidates, res, curr, target, 0, 0);
        return res;
    }
};