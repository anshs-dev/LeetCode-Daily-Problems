class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int>count(3,0);
        for (char c:s) count[c-'a']++;
        if (count[0]<k||count[1]<k||count[2]<k)return -1;
        int n=s.length(),ans=n,l=0;
        for (int r=0;r<n;++r) {
            count[s[r]-'a']--;
            while(count[s[r]-'a']<k)count[s[l++]-'a']++;
            ans=min(ans,n-(r-l+1));
        }
        return ans;
    }
};
