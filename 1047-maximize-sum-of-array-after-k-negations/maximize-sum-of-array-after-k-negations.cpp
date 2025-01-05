class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int &x:nums){
            if(k==0)
            break;
            if(x<0){
            x=x*-1;
            k--;
            }
        }
        if(k%2==1){
            int low=*min_element(nums.begin(),nums.end());
            for(int &x:nums){
                if(x==low || -x==low){
                    x=x*-1;
                    break;
                }
            }
        }
        return accumulate(nums.begin(),nums.end(),0);
    }
};