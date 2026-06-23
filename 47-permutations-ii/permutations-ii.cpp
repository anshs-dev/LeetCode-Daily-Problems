class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int> &nums, vector<bool> &visited, vector<int> &curr){
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!visited[i]){
                curr.push_back(nums[i]);
                visited[i]=true;
                backtrack(nums,visited,curr);
                visited[i]=false;
                curr.pop_back();
                while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool>visited(nums.size(),false);
        vector<int>v;
        backtrack(nums,visited,v);
        return res;
    }
};