class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int left=0,res=0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'A']++;
            int max_freq=*max_element(v.begin(),v.end());
            while(left<=i && (i-left+1-max_freq)>k){
                v[s[left]-'A']--;
                left++;
                max_freq=*max_element(v.begin(),v.end());
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};