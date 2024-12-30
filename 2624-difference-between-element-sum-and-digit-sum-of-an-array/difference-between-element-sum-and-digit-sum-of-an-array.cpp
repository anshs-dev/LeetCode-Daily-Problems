class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int x:nums) sum+=x;
        int sum2=0;
        for(int x:nums){
        int temp=x;
        while(temp!=0){
            sum2+=temp%10;
            temp/=10;
        }
        }
        return abs(sum-sum2);
    }
};