class Solution {
public:
    vector<vector<int>>res;
    void backtrack(vector<int> &nums, vector<bool> &used, vector<int> &curr){
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!used[i]){
                curr.push_back(nums[i]);
                used[i]=true;
                backtrack(nums,used,curr);
                curr.pop_back();
                used[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        vector<int>curr;
        backtrack(nums,used,curr);
        return res;
    }
};