class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max=*max_element(nums.begin(),nums.end());
        int sum=0;
        while(k--){
        sum+=max;
        max++;
        }
        return sum;
    }
};