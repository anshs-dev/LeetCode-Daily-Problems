class Solution {
public:
    int longestContinuousSubstring(string s) {
        int left=0;
        int right=0;
        int max_distance=0;
        while(right<s.length()){
            while(right<s.length() && s[right]==s[right+1]-1){
                right++;
            }
            max_distance=max(max_distance,right-left+1);
            left=++right;
        }
        return max_distance;
    }
};