class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int> &nums, vector<int> &curr, int i){
        if(i==nums.size()){
            res.push_back(curr);
            return;
        }
            curr.push_back(nums[i]);
            backtrack(nums,curr,i+1);
            curr.pop_back();
            backtrack(nums,curr,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        backtrack(nums,curr,0);
        return res;
    }
};