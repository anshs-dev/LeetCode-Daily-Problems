class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0,prod=1,idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                idx=i;
                count++;
            }
            else prod*=nums[i];
        }
        vector<int>result(nums.size(),0);
        if(count>1) return result;
        if(count==1){
            result[idx]=prod;
            return result;
        }
        for(int i=0;i<nums.size();i++) result[i]=prod/nums[i];
        return result;
    }
};