class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int x:arr)
        m[x]++;
        vector<pair<int,int>>v;
        for(auto &x:m){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second>b.second;
        });
        int total=arr.size();
        int count=0;
        for(auto &x:v){
        total=total-x.second;
        count++;
        if(total<=arr.size()/2)
        return count;
        }
        return -1;
    }
};