class Solution {
public:
    bool scoreBalance(string s) {
        vector<int>pref;
        pref.push_back(s[0]-'a'+1);
        for(int i=1;i<s.length();i++) pref.push_back(pref[i-1]+(s[i]-'a'+1));
        int total=pref.back();
        for(int i=0;i<s.length();i++) if(pref[i]==total-pref[i]) return true;
        return false;
    }
};