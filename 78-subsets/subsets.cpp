class Solution {
public:
    void dfs(vector<vector<int>> &grid,vector<int> &nums, vector<int> &temp, int i){
        if(i==nums.size()) {
            grid.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        dfs(grid,nums,temp,i+1);
        temp.pop_back();
        dfs(grid,nums,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> grid;
        vector<int>temp;
        dfs(grid,nums,temp,0);
        return grid;
    }
};