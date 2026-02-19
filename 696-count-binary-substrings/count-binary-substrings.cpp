class Solution {
public:
    int countBinarySubstrings(string s) {
        int curr=1,res=0;
        vector<int>v;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) curr++;
            else{
                v.push_back(curr);
                curr=1;
            }
        }
        v.push_back(curr);
        for(int i=1;i<v.size();i++) res+=min(v[i],v[i-1]);
        return res;

    }
};