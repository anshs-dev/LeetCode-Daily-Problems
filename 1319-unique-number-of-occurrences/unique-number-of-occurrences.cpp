class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int x:arr)
        m[x]++;
        unordered_map<int,int>o;
        for(auto &x:m){
        o[x.second]++;
        if(o[x.second]>1)
        return false;
        }
        return true;
    }
};