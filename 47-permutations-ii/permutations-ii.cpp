class Solution {
public:
    void dfs(vector<vector<int>> &grid,vector<int> &nums, vector<bool> &check,vector<int>& temp){
        if(temp.size()==nums.size()){
            grid.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!check[i]){
                check[i]=true;
                temp.push_back(nums[i]);
                dfs(grid,nums,check,temp);
                check[i]=false;
                temp.pop_back();
                while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> grid;
        vector<int>temp;
        vector<bool>check(nums.size(),false);
        dfs(grid,nums,check,temp);
        return grid;
    }
};