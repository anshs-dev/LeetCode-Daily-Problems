class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<pair<string,string>>v;
        for(auto x:words){
            string temp=x;
            sort(temp.begin(),temp.end());
            if(v.empty()) v.push_back({temp,x});
            else if(v.back().first!=temp) v.push_back({temp,x});
        }
        vector<string>result;
        for(auto x:v) result.push_back(x.second);
        return result;
    }
};