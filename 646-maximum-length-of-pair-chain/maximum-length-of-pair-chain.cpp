class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int count=1;
        auto it=pairs[0];
        for(int i=1;i<pairs.size();i++){
            if(it[1]<pairs[i][0]){
                count++;
                it=pairs[i];
            }
            else if(it[1]>pairs[i][1]){
                it=pairs[i];
            }
        }
        return count;
    }
};