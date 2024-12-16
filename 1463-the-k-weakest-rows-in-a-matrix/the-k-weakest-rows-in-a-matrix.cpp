class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,pair<int,vector<int>>>>v;
        int i=0;
        for(auto &x:mat){
            int sum=0;
            for(int m:x){
                sum+=m;
            }
        v.push_back({i,{sum,x}});
        i++;
        }
        sort(v.begin(),v.end(),[](const pair<int,pair<int,vector<int>>>&a,const pair<int,pair<int,vector<int>>>&b){
            if(a.second.first==b.second.first)
            return a.first<b.first;
            return a.second.first<b.second.first;
        });
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(v[i].first);
        }
        return result;
    }
};