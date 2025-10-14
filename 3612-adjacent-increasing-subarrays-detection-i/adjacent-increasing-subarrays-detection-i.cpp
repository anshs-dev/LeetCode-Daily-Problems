class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2*k) return false;
        vector<int>inc(n, 1);
        for(int i=1;i<n;i++) if(nums[i]>nums[i-1]) inc[i]=inc[i-1]+1;
        for(int i=k-1;i<= n - k - 1; i++) if(inc[i] >= k && inc[i+k] >= k) return true;
        return false;
    }
};
