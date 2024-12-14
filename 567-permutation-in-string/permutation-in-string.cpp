class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
        return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<s1.length();i++){
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if(m1==m2) return true;
        int k=s1.length();
        for(int i=k;i<s2.length();i++){
            m2[s2[i]]++;
            m2[s2[i-k]]--;
            if(m2[s2[i-k]]==0)
            m2.erase(s2[i-k]);
            if(m1==m2) return true;
        }
        return false;
    }
};