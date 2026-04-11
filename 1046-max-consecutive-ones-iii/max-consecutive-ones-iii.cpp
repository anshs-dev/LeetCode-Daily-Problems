class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero=0,ans=0,left=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            while(left<=i && zero>k){
                if(nums[left]==0) zero--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};