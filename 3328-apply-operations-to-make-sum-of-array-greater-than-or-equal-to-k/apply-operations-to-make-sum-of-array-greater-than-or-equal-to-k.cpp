class Solution {
public:
    int minOperations(int k) {
        int times=sqrt(k);
        int distance=times-1;
        int len=times;
        while(times<k){
            times+=len;
            distance++;
        }
        return distance;
    }
};