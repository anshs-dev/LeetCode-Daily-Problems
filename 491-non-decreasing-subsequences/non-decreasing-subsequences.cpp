class Solution {
public:
    void dfs(vector<vector<int>> &res, vector<int> &curr, vector<int> &nums, int j){
        if(curr.size()>=2) res.push_back(curr);
        unordered_set<int>st;
        for(int i=j;i<nums.size();i++){
            if(st.count(nums[i])) continue;
            st.insert(nums[i]);
            if(curr.empty() || (curr.back()<=nums[i])){
                curr.push_back(nums[i]);
                dfs(res,curr,nums,i+1);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>curr;
        dfs(res,curr,nums,0);
        return res;
    }
};