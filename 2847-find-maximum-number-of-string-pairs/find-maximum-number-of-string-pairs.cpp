class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>m;
        for(string x:words){
            sort(x.begin(),x.end());
            m[x]++;
        }
        int count=0;
        for(auto &x:m){
            if(x.second>1)
            count++;
        }
        return count;
    }
};