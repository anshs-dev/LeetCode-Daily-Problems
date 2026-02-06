class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=INT_MIN,j=0;
        for(int i=0;i<nums.size();i++){
            while(j<nums.size() && nums[j]<=1LL*nums[i]*k) j++;
            res=max(res,j-i);
        }
        return nums.size()-res;
    }
};