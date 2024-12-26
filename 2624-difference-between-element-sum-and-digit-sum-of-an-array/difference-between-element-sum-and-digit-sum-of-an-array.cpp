class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int x:nums) sum+=x;
        int sum2=0;
        for(int x:nums){
        int temp=x;
        while(temp!=0){
            int d=temp%10;
            sum2+=d;
            temp/=10;
        }
        }
        return abs(sum-sum2);
    }
};