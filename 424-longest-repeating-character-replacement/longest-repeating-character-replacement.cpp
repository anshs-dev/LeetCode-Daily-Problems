class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int left=0,res=0;
        for(int i=0;i<s.size();i++){
            v[s[i]-65]++;
            int max_freq=*max_element(v.begin(),v.end());
            while(max_freq+k<i-left+1){
                v[s[left]-65]--;
                max_freq=*max_element(v.begin(),v.end());
                left++;
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};