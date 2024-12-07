class Solution {
public:
    int countGoodSubstrings(string s) {
        int left=0;
        int mid=1;
        int right=2;
        int count=0;
        while(right<s.length()){
        if(s[right]!=s[mid] && s[right]!=s[left] && s[left]!=s[mid])
        count++;
        left++;
        right++;
        mid++;
        }
        return count;
    }
};