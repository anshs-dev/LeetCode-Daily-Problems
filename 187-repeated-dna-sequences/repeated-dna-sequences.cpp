class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>m;
        for(int i=0;i<s.length();i++){
        m[s.substr(i,10)]++;
        }
        vector<string>result;
        for(auto &pair:m){
            if(pair.second>1)
            result.push_back(pair.first);
        }
        return result;
    }
};