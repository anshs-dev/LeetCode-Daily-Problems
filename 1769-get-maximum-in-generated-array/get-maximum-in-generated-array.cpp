class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>nums(n+1,0);
        if(n==0)
        return 0;
        int max_num=1;
        nums[1]=1;
        for(int i=1;2*i+1<=n;i++){
        nums[2*i]=nums[i];
        max_num=max(max_num,nums[2*i]);
        nums[2*i+1]=nums[i]+nums[i+1];
        max_num=max(max_num,nums[2*i+1]);
        }
       return max_num;
    }
};