class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum=0,min_sum=0,current_sum=0;
        for(int x:nums){
           current_sum+=x;
           max_sum=max(max_sum,current_sum);
           if(current_sum<0) current_sum=0;
        }
        current_sum=0;
        for(int x:nums){
            current_sum+=x;
            min_sum=min(current_sum,min_sum);
            if(current_sum>0) current_sum=0;
        }
        return max(abs(min_sum),abs(max_sum));
    }
};