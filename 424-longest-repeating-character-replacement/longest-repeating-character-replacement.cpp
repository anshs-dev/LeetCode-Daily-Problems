class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int left=0,res=0,max_freq=0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'A']++;
            max_freq=max(max_freq,v[s[i]-'A']);
            while(left<=i && (i-left+1-max_freq)>k){
                v[s[left]-'A']--;
                left++;
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};