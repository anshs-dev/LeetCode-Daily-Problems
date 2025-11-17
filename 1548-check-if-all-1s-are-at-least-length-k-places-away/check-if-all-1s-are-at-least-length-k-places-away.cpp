class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev=INT_MIN+1000;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1 && i-prev<=k) return false;
            if(nums[i]==1) prev=i;
        }
        return true;
    }
};