class Solution {
public:
    int beautySum(string s) {
        int total_sum=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
            int max_freq=0,min_freq=INT_MAX;
            freq[s[j]-'a']++;
            for(int k=0;k<26;k++){
            if(freq[k]>0){
            max_freq=max(max_freq,freq[k]);
            min_freq=min(min_freq,freq[k]);
            }
            }
            total_sum+=max_freq-min_freq;
            }
        }
        return total_sum;
    }
};