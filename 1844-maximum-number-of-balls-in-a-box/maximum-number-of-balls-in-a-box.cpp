class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>m;
        int max_sum=0;
        for(int i=lowLimit;i<=highLimit;i++){
        int digit=0;
        int temp=i;
        while(temp>0){
            digit+=temp%10;
            temp/=10;
        }
        m[digit]++;
        max_sum=max(max_sum,m[digit]);
        }
        return max_sum;
    }
};