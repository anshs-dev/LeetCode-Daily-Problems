class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<char>v1,v2;
        if(s1==s2) return true;
        int count=0;
        if(s1.length()!=s2.length()) return false;
        for(int i=0;i<s1.length();i++){
        if(count>2) return false;
        if(s1[i]!=s2[i]){
            v1.push_back(s1[i]);
            v2.push_back(s2[i]);
            count++;
        }
        }
        return v1.size()==2 && v1[0]==v2[1] && v1[1]==v2[0];
    }
};