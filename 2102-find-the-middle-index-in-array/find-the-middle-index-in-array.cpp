class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>prefix(nums.begin(),nums.end());
         for(int i=nums.size()-2;i>=0;i--){
            prefix[i]+=prefix[i+1];
        }
        for(int i=1;i<nums.size();i++)
        nums[i]=nums[i]+nums[i-1];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==prefix[i])
            return i;
        }
        return -1;
    }
};