class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>m;
        int max_sum=-1;
        for(int x:nums){
            int sum=0,temp=x;
            while(temp!=0){
                sum+=temp%10;
                temp/=10;
            }
            if(m.count(sum)){
                if(m[sum]<x){
                    max_sum=max(max_sum,m[sum]+x);
                    m[sum]=x;
                }
                else{
                    max_sum=max(max_sum,m[sum]+x);
                }
            }
            else{
                m[sum]=x;
            }
        }
        return max_sum;
    }
};