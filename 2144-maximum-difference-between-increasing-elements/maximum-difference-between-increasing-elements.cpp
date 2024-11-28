class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min=nums[0];
        int max_dif=-1;
    for(int i=1;i<nums.size();i++){
    if(min<nums[i])
        max_dif=max(max_dif,nums[i]-min);
    else
        min=nums[i];
    }
    return max_dif;
    }
};