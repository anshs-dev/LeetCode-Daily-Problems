class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left=0,sum=0,max_sum=0;
        unordered_map<int,int>m;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            m[nums[right]]++;
            while(m[nums[right]]>1){
                sum-=nums[left];
                m[nums[left]]--;
                left++;
            }
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};