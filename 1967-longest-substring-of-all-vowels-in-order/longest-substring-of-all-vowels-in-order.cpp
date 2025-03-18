class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int len=0,max_len=0,count=0;
        for(int i=0;i<word.length();i++){
            if(i>0 && word[i]<word[i-1]){
                len=0;
                count=0;
            }
            len++;
            if(i>0 && word[i]>word[i-1]) count++;
            if(count==4) max_len=max(max_len,len);
        }
        return max_len;
    }
};