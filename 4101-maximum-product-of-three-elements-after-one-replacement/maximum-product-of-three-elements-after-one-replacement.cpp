class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long res=0;
        sort(nums.begin(),nums.end(),[](const int &a,const int &b){
            return abs(a)<abs(b);
        });
        res=(long long)nums.back()*(long long)nums[nums.size()-2];
        return res<0?res*-100000:res*100000;
    }
};