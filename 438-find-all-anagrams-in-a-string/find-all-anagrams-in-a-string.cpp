class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>fix;
        unordered_map<char,int>changing;
        for(int i=0;i<p.length();i++){
        fix[p[i]]++;
        changing[s[i]]++;
        }
        vector<int>result;
        if(changing==fix)
        result.push_back(0);
        int k=p.length();
        for(int i=k;i<s.length();i++){
            changing[s[i]]++;
            changing[s[i-k]]--;
            if(changing[s[i-k]]==0)
            changing.erase(s[i-k]);
            if(changing==fix)
            result.push_back(i-k+1);
        }
        return result;
    }
};