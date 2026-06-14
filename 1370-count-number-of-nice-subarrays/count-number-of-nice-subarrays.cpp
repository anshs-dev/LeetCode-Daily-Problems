class Solution {
public:
    int helper(vector<int> &nums, int k){
        int left=0,odd=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1) odd++;
            while(left<=i && odd>k){
                if(nums[left]%2==1) odd--;
                left++;
            }
            res+=(i-left+1);
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};