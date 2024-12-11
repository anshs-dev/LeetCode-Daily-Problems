class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int count=0;
        while(left<right){
            if(nums[right]+nums[left]==k){
                left++;
                right--;
                count++;
            }
            else if(nums[left]+nums[right]>k){
                right--;
            }
            else{
                left++;
            }

        }
        return count;
    }
};