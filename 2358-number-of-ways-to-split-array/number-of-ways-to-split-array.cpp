class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long count=0;
        vector<long long>prefix(nums.size(),0);
        prefix[nums.size()-1]=nums[nums.size()-1];
        for(long long i=nums.size()-2;i>=0;i--){
            prefix[i]=prefix[i+1]+nums[i];
        }
        long long current=0;
        for(long long i=0;i<nums.size()-1;i++){
            current+=nums[i];
            if(current>=prefix[i]-nums[i])
            count++;
        }
        return count;
    }
};