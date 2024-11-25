class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=0;
        int second_max=0;
        int max_index=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            second_max=max;
            max=nums[i];
            max_index=i;
        }
        else if(nums[i]>second_max && nums[i]<max){
            second_max=nums[i];
        }
        }
        if(second_max*2<=max){
            return max_index;
        }
        else
        return -1;
    }
};