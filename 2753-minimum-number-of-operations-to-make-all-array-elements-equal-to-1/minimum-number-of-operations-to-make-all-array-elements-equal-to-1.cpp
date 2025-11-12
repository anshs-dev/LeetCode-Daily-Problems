class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0,ans=INT_MAX;
        for(int i=0;i<nums.size();i++) if(nums[i]==1) count++;
        if(count>=1) return nums.size()-count;
        for(int i=0;i<nums.size();i++){
            int gc=nums[i];
            for(int j=i+1;j<nums.size();j++){
                gc=gcd(gc,nums[j]);
                if(gc==1){
                    ans=min(ans,j-i);
                    cout<<j-i+1<<" ";
                    break;
                }
            }
        }
        return ans==INT_MAX?-1:nums.size()+ans-1;
    }
};