class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>&v, vector<int>&inter) {
        int index=0;
        vector<vector<int>>result;
        while(index<v.size() && inter[0]>v[index][1]){
            result.push_back(v[index]);
            index++;
        }
        while(index<v.size() && inter[1]>=v[index][0]){
            inter[0]=min(v[index][0],inter[0]);
            inter[1]=max(v[index][1],inter[1]);
            index++;
        }
        result.push_back(inter);
        while(index<v.size()){
        result.push_back(v[index]);
        index++;
        }
        return result;
    }
};