class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int,int>m;
        for(auto x:roads){
            for(int n:x)
            m[n]++;
        }
        int value=n;
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const pair<int,int>a,const pair<int,int>b){
            if(a.second==b.second)
            return a.first<b.first;
            return a.second>b.second;
        });
        unordered_map<int,int>m2;
        for(auto &x:v){
            m2[x.first]=value;
            value--;
        }
        long long count=0;
        for(auto x:roads){
            count+=m2[x[0]]+m2[x[1]];
        }
        return count;
    }
};