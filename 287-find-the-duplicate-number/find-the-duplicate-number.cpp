class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int rep=nums[0];
        for(int i=1;i<nums.size();i++){
            if(rep==nums[i])
            return nums[i];
            else
            rep=nums[i];
        }
        return 0;
    }
};