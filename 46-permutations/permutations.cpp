class Solution {
public:
    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> curr){
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=INT_MIN){
                curr.push_back(nums[i]);
                int val=nums[i];
                nums[i]=INT_MIN;
                dfs(nums,res,curr);
                curr.pop_back();
                nums[i]=val;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<bool> visited(nums.size(),false);
        dfs(nums,res,curr);
        return res;
    }
};