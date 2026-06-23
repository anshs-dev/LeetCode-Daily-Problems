class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int> &nums, vector<int> &curr, int target, int sum, int i){
        if(sum==target){
            res.push_back(curr);
            return;
        }
        if(sum>=target || i>=nums.size()) return;
        sum+=nums[i];
        curr.push_back(nums[i]);
        dfs(nums,curr,target,sum,i);
        sum-=nums[i];
        curr.pop_back();
        dfs(nums,curr,target,sum,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        dfs(candidates,curr,target,0,0);
        return res;
    }
};