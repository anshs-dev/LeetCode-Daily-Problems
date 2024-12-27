class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<vector<int>,int>v;
        int count=0;
        for(auto x:dominoes){
            sort(x.begin(),x.end());;
            if(v[x]>=1)
            count+=v[x];
            v[x]++;

        }
        return count;
    }
};