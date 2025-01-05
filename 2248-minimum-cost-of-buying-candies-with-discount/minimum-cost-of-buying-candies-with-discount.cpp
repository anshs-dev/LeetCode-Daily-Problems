class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int total_cost=0,flag=0;
        for(int i=0;i<cost.size();i++){
            if(flag==0 || flag==1){
                total_cost+=cost[i];
                flag++;
            }
            else{
                flag=0;
            }
        }
        return total_cost;
    }
};