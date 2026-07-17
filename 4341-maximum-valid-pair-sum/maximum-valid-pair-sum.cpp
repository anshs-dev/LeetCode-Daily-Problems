class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        vector<int> rmax(ssize(nums),0);
        rmax[ssize(nums)-1]=nums.back();
        for(int i=ssize(nums)-2;i>=0;i--) rmax[i]=max(rmax[i+1],nums[i]);
        int res=0;
        for(int i=0;i<nums.size()-k;i++) res=max(res,nums[i]+rmax[i+k]);
        return res; 
    }
};