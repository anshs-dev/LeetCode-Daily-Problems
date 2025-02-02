class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>result;
        const int mod=1000000007;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                sum=sum%mod;
                result.push_back(sum);
            }
        }
        left--;
        int sum=0;
        sort(result.begin(),result.end());
        for(int i=left;i<right;i++){
            sum+=result[i];
            sum=sum%mod;
        }
        return sum;
    }
};