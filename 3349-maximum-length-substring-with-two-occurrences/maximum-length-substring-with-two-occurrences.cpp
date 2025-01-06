class Solution {
public:
    int maximumLengthSubstring(string s) {
        int max_count=0,right=0,left=0;
        unordered_map<char,int>m;
        while(right<s.length()){
            m[s[right]]++;
            if(m[s[right]]>2){
                while(m[s[right]]!=2){
                    m[s[left]]--;
                    left++;
                }
            }
        max_count=max(max_count,right-left+1);
        right++;
        }
       return max_count;
    }
};