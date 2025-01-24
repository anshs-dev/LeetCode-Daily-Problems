class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int current=nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                if(nums[left]+nums[right]+current==0){
                    v.push_back({current,nums[left],nums[right]});
                    left++;
                    while(left<right && nums[left-1]==nums[left]) left++;
                    right--;
                    while(right>left && nums[right]==nums[right+1])
                    right--;
                }
                else if(nums[left]+nums[right]+current>0){
                    right--;
                }
                else
                left++;
            }
        }
        return v;
    }
};