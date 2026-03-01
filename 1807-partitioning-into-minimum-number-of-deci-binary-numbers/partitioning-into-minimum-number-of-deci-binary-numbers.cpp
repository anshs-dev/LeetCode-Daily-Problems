class Solution {
public:
    int minPartitions(string n) {
        int max1=0;
        for(int c:n){
            max1=max(c-'0',max1);
        }
        return max1;
    }
};