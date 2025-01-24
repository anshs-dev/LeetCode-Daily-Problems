class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long close_sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            long long left=i+1;
            long long right=nums.size()-1;
            while(left<right){
                int temp=nums[i]+nums[left]+nums[right];
                if(abs(target-temp)<abs(target-close_sum))
                close_sum=temp;
                if(temp<target)left++;
                else right--;
            }
        }
        return close_sum;
    }
};