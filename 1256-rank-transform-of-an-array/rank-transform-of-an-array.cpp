class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        unordered_map<int,int>m;
        for(int i=0;i<temp.size();i++) m[temp[i]]=i+1;
        temp={};
        for(int x:arr) temp.push_back(m[x]);
        return temp;
    }
};