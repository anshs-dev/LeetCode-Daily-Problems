class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0;
        for(auto x:accounts){
            int current_sum=0;
            for(int n:x){
            current_sum+=n;
            }
            max_wealth=max(max_wealth,current_sum);
        }
        return max_wealth;
    }
};