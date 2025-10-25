class Solution {
public:
    int totalMoney(int n) {
        int result=0,days=7,initial=1,prev=1;
        while(n--){
            if(days==0){
                days=7;
                prev=initial+1;
                initial++;
            }
            result+=prev;
            prev++;
            days--;
        }
        return result;
    }
};