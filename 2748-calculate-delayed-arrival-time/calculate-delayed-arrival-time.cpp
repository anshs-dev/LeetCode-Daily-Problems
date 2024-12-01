class Solution {
public:
    int findDelayedArrivalTime(int a, int b) {
        if(a+b<24)
        return a+b;
        else
        return (a+b)%24;
    }
};