class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        unsigned int curr=1,i=0;
        while(i<coins.size()){
            if(coins[i]<=curr) curr+=coins[i];
            else break;
            i++;
        }
        return curr;
    }
};