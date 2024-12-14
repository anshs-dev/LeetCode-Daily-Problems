class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int left=0,right=0,max_freq=0,max_len=0;
        while(right<s.length()){
            v[s[right]-'A']++;
            max_freq=max(max_freq,v[s[right]-'A']);
            right++;
            if((right-left)-max_freq>k){
                v[s[left]-'A']--;
                left++;
            }
            
            max_len=max(right-left,max_len);
        }
        return max_len;
    }
};