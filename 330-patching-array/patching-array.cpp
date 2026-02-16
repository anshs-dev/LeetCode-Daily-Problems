class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        unsigned long long count=0,patch=0,curr=1,i=0;
        while(curr<=n && i<nums.size()){
            if(nums[i]<=curr){
                curr+=nums[i];
                i++;
            }
            else if(nums[i]>curr){
                curr=curr*2;
                count++;
            }
        }
        while(curr<=n){
            curr=curr*2;
            count++;
        }
        return count;
    }
};