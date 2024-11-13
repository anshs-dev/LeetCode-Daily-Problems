class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty())
        return 0;
        int j=1;
        int maxe=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
            continue;
        if(nums[i]==nums[i+1]-1){
            j++;
            maxe=max(maxe,j);
        }
        else
            j=1;
        }
        return max(maxe,j);
    }
};