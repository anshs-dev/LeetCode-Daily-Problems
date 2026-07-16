class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=accumulate(nums.begin(),nums.end(),0),leftsum=0;
        for(int i=0;i<nums.size();i++){
            if(i>0) leftsum+=nums[i-1];
            rightsum-=nums[i];
            if(leftsum==rightsum) return i;
        }
        return -1;
    }
};