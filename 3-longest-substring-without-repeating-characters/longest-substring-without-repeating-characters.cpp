class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char>window;
       int left=0;
       int right=0;
       int max_len=0;
       while(right<s.length()){
        if(!window.count(s[right])){
            window.insert(s[right]);
            max_len=max(max_len,right-left+1);
        }
        else{
            while(window.count(s[right])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
        }
        right++;
       }
       max_len=max(max_len,right-left);
       return max_len;
    }
};