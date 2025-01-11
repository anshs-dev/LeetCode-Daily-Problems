class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mine=*min_element(nums.begin(),nums.end());
        int maxe=*max_element(nums.begin(),nums.end());
        if(maxe-mine <=2*k)
        return 0;
        else{
            return maxe-k-mine-k;
        }
    }
};