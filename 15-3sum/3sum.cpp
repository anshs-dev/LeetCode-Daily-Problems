class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum=nums[i],l=i+1,j=nums.size()-1;
            while(l<j){
                if(nums[l]+nums[j]==-(sum)){
                    result.push_back({nums[i],nums[l],nums[j]});
                    l++;
                    j--;
                while(l<j && nums[l]==nums[l-1]) l++;
                while(j<nums.size()-1 && j>l && nums[j]==nums[j+1]) j--;
                }
                else if(nums[l]+nums[j]>-(sum)) j--;
                else l++;
            }
        }
        return result;
    }
};