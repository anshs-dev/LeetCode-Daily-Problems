class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,max_len=0;
        vector<int>freq(26,0);
        int max_freq=0;
        while(right<s.length()){
            freq[s[right]-'A']++;
            max_freq=max(max_freq,freq[s[right]-'A']);
            right++;
            if((right-left)-max_freq>k){
                freq[s[left]-'A']--;
                left++;
            }
            max_len=max(max_len,right-left);
        }
        return max_len;
    }
};