class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(264,0);
        int left=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i])
            v[s[i]]++;
            while(left<i && v[s[i]]>1){
                v[s[left]]--;
                left++;
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};