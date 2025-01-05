class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),[](const vector<int>a,const vector<int>b){
            return a[0]-a[1]<b[0]-b[1];
        });
        int total_sum=0;
        for(int i=0;i<costs.size()/2;i++){
            total_sum+=costs[i][0];
        }
        for(int i=costs.size()/2;i<costs.size();i++){
            total_sum+=costs[i][1];
        }
        return total_sum;
    }
};