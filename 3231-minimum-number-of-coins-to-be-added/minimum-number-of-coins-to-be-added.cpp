class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        unsigned long long curr=1,i=0,count=0;
        sort(coins.begin(),coins.end());
        while(curr<=target && i<coins.size()){
            if(coins[i]<=curr){
                curr+=coins[i];
                i++;
            }
            else{
                curr*=2;
                count++;
            }
        }
        while(curr<=target){
            curr*=2;
            count++;
        }
        return count;
    }
};