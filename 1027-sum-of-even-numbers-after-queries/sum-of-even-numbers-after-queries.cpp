class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int total_sum=0;
        vector<int>result;
        for(int x:nums){
            if(x%2==0)
            total_sum+=x;
        }
        for(auto x:queries){
        if(nums[x[1]]%2==0){
            total_sum-=nums[x[1]];
        }
            nums[x[1]]=nums[x[1]]+x[0];
            if(nums[x[1]]%2==0){
            total_sum+=nums[x[1]];
        }
        result.push_back(total_sum);
        }
        return result;
    }
};