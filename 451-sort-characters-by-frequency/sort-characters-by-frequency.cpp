class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>v;
        unordered_map<char,int>m;
        for(char x:s)
        m[x]++;
        for(auto &x:m)
        v.push_back({x.first,x.second});
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string result;
        for(auto &x:v){
        int times=x.second;    
        while(times--){
        result+=x.first;
            }
        }
      return result;
    }
};