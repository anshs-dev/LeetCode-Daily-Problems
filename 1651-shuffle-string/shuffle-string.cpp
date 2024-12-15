class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<char,int>>v;
        int i=0;
        for(char x:s){
            v.push_back({x,indices[i]});
            i++;
        }
        sort(v.begin(),v.end(),[](const pair<char,int>&a,const pair<char,int>&b){
           return a.second<b.second;
        });
        string result="";
        for(auto &x:v){
            result+=x.first;
        }
        return result;
    }
};