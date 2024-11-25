class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int sum=0;
        unordered_map<int,int>m;
        int square=grid[0].size();
        int lost=0;
        for(auto &x:grid){
            for(int k:x){
                sum+=k;
                m[k]++;
                if(m[k]>1)
                lost=k;
            }
        }
        int cont=0;
        for(int i=1;i<=(square*square);i++){
        cont+=i;
        }
        vector<int>result;
        result.push_back(lost);
        result.push_back(cont-(sum-lost));
        return result;
    }
};