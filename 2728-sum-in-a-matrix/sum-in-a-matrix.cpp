class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(auto &x:nums) sort(x.begin(),x.end());
        int sum=0;
        for(int i=0;i<nums[0].size();i++){
           int maxe=0;
           for(auto &x:nums){
              maxe=max(x[i],maxe);
           }
           sum+=maxe;
        }
        return sum;
    }
};