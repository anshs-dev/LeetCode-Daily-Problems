class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double average;
        double sum;
        for(int i=0;i<k;i++){
        sum+=nums[i];
        }
        average=sum/k;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            average=max(average,sum/k);
        }
        return average;
    }
};