class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,pair<int,int>>m;
        for(auto x:matches){
            m[x[0]].first++;
            m[x[1]].second--;
        }
        set<int>zero;
        set<int>one;
        for(auto &x:m){
            if(x.second.first>=1 && x.second.second==0){
                zero.insert(x.first);
            }
            else if(x.second.second==-1){
            one.insert(x.first);
            }
        }
        vector<int>zer(zero.begin(),zero.end());
        vector<int>on(one.begin(),one.end());
        vector<vector<int>>v;
        v.push_back(zer);
        v.push_back(on);
        return v;
    }
};