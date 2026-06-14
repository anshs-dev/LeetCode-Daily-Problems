class Solution {
public:
    int helper(vector<int> &nums, int goal){
        int left=0,sum=0,res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(left<=i && sum>goal){
                sum-=nums[left];
                left++;
            }
            res+=i-left+1;
        }
        cout<<res<<endl;
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};