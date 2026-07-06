class Solution {
public:
    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> curr, vector<bool> &visited){
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!visited[i]){
                curr.push_back(nums[i]);
                visited[i]=true;
                dfs(nums,res,curr,visited);
                visited[i]=false;
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<bool> visited(nums.size(),false);
        dfs(nums,res,curr,visited);
        return res;
    }
};