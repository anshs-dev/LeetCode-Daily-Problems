class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count=0;
        unordered_map<string,int>m;
        for(string x:words){
            set<char>s1(x.begin(),x.end());
            string result(s1.begin(),s1.end());
            m[result]++;
        }
        for(auto &x:m){
            if(x.second>1)
            count+=(x.second*(x.second-1))/2;
        }
        return count;
    }
};