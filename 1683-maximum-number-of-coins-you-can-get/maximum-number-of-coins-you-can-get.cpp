class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int right=piles.size()-2;
        int times=piles.size()/3;
        int coins=0;
        while(times--){
        coins+=piles[right];
        right-=2;
        }
      return coins;
    }
};