class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int> &nums, vector<int> &curr, int i){
        if(curr.size()>1) res.push_back(curr);
        if(i>=nums.size()) return;
        unordered_set<int>st;
        for(int j=i;j<nums.size();j++){
            if(st.count(nums[j])) continue;
            if(curr.empty() || nums[j]>=curr.back()){
                curr.push_back(nums[j]);
                st.insert(nums[j]);
                dfs(nums,curr,j+1);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>curr;
        dfs(nums,curr,0);
        return res;
    }
};