class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>seen;
     for(string s:strs){
        string temp=s;
        sort(temp.begin(),temp.end());
        seen[temp].push_back(s);
     }
     vector<vector<string>>v;
     for(const auto &p:seen){
        v.push_back(p.second);
     }
     return v;
      
    }
};