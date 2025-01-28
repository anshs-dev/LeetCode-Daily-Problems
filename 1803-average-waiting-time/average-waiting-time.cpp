class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        vector<double>result;
        int sum=0;
        for(auto &x:customers){
        if(x[0]>sum){
            sum=x[0]+x[1];
            result.push_back(sum-x[0]);
        }
        else{
            sum+=x[1];
            result.push_back(sum-x[0]);
        }
        }
        double res=0;
        for(auto x:result) res+=x;
        return res/result.size();
    }
};