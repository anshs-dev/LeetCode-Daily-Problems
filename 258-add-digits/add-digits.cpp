class Solution {
public:
    int addDigits(int num) {
        vector<int>sum;
        while(num>9){
        int temp=num;
        while(temp!=0){
        int d=temp%10;
        temp/=10;
        sum.push_back(d);
        }
        int news=0;
        for(int x:sum)
        news+=x;
        sum.clear();
        num=news;
        }
        return num;
    }
};