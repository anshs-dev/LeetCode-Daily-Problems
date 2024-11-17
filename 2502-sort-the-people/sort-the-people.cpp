class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        for(int i=0;i<heights.size();i++){
            v.push_back({heights[i],names[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<string>s;
        for(int i=0;i<heights.size();i++){
            s.push_back(v[i].second);
        }
        return s;
    }
};