class Solution {
public:
    long long subarraysWithKDistinct(vector<int>& nums, int k) {
        return calculation(nums,k)-calculation(nums,k+1);
    }
    long long calculation(vector<int>nums,int k){
        unordered_map<int,int>m;
        int left=0;
        long long count=0;
        for(int right=0;right<nums.size();right++){
            m[nums[right]]++;
            while(m.size()>=k){
                count+=nums.size()-right;
                m[nums[left]]--;
                if(m[nums[left]]==0) m.erase(nums[left]);
                left++;
            }
        }
        return count;
   }
};