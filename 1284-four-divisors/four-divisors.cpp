class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int>four;
        for(int x:nums){
            int count=0;
            int sum=0;
        for(int i=1;i<=x/2;i++){
            if(x%i==0){
            count++;
            sum+=i;
            }
            if(count>3)
            break;
        }
        if(count==3)
        four.push_back(sum+x);
        }
        int sum2=0;
        for(int x:four){
         sum2+=x;
        }
        return sum2;
    }
};