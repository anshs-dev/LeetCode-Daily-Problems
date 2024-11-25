class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=1;
        int max_count;
        if(nums[0]==1){
        count=1;
        max_count=1;
        }
        else{
        count=0;
        max_count=0;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                max_count=max(max_count,count);
            }
            else{
                count=0;
            }
        }
        return max_count;
    }
};