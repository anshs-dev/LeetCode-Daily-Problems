class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left=j+1;
                int right=nums.size()-1;
                long long halwa=nums[i]+nums[j];
                while(left<right){
                    if(halwa+nums[left]+nums[right]==target){
                        v.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        while(left<right && nums[left]==nums[left-1]) left++;
                        right--;
                        while(right>left && nums[right]==nums[right+1]) right--;
                    }
                    else if(halwa+nums[left]+nums[right]>target)
                    right--;
                    else
                    left++;
                }
            }
        }
        return v;
    }
};