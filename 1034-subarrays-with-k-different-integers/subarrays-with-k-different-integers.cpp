class Solution {
public:
    int helper(vector<int> &nums, int k){
        unordered_map<int,int>m;
        int left=0,count=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            while(m.size()>k){
                m[nums[left]]--;
                if(m[nums[left]]==0) m.erase(nums[left]);
                left++;
            }
            count+=(i-left+1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};