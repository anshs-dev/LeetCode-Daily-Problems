class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>temp=nums;
        do{
            v.push_back(nums);
        }
        while(next_permutation(nums.begin(),nums.end()));
        sort(nums.begin(),nums.end());
        do{
            if(nums==temp)
            break;
            else
            v.push_back(nums);
        }
        while(next_permutation(nums.begin(),nums.end()));
        return v;
    }
};