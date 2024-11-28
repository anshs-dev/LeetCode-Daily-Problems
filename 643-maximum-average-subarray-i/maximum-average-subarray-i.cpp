class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int max=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int max_sum=sum;
        for(int j=k;j<nums.size();j++){
            sum+=nums[j]-nums[j-k];
            max_sum=std::max(sum,max_sum);
        }
         return static_cast<double>(max_sum)/k;
    }
};