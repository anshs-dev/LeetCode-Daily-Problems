class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<=1)
        return 0;
        int size=0;
        int max_size=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            size=nums[i+1]-nums[i];
            max_size=max(max_size,size);
        }
        return max_size;
    }
};