class Solution {
public:
    int minOperations(vector<int>& nums) {
        int swaps=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                nums[i]=1;
                if(nums[i+1]==1)
                nums[i+1]=0;
                else if(nums[i+1]==0)
                nums[i+1]=1;
                if(nums[i+2]==1)
                nums[i+2]=0;
                else if(nums[i+2]==0)
                nums[i+2]=1;
                swaps++;
            }
        }
        for(int x:nums){
            if(x==0) return -1;
        }
        return swaps;
    }
};