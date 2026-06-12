class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum=nums[i];
            unordered_set<int>m;
            for(int j=i+1;j<nums.size();j++){
                if(m.count(-1*(sum+nums[j]))){
                    result.push_back({sum,nums[j],-1*(sum+nums[j])});
                    while(j<nums.size()-1 && nums[j]==nums[j+1]) j++;
                }
                m.insert(nums[j]);
            }
        }
        return result;
    }
};