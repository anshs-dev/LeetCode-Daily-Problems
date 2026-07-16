class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>temp(nums.size(),0);
        int maxe=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxe=max(nums[i],maxe);
            temp[i]=gcd(maxe,nums[i]);
        }
        sort(temp.begin(),temp.end());
        int n=ssize(temp);
        long long sum=0;
        for(int i=0;i<n/2;i++) sum+=gcd(temp[i],temp[n-i-1]);
        return sum;
    }
};