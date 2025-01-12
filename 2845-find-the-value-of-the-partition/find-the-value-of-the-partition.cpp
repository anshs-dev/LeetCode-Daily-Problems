class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int dist=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            dist=min(dist,nums[i]-nums[i-1]);
        }
        return dist;
    }
};