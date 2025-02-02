class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        multiset<int>m;
        const int mod=1000000007;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                m.insert(sum);
            }
        }
        left--;
        int sum=0;
        for(int x:m){
            if(left==0 && right==0) break;
            if(left==0){
                sum+=x;
                sum=sum%mod;
                right--;
            }
            else{
                left--;
                right--;
            }
        }
        return sum;
    }
};