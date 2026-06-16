class Solution {
public:
    string minWindow(string s, string t) {
        int left=0,len=INT_MAX,start=-1;
        int count=t.size();
        unordered_map<char,int>need,have;
        for(char x:t) need[x]++;
        for(int i=0;i<s.size();i++){
            have[s[i]]++;
            if(have[s[i]]<=need[s[i]]) count--;
            while(count==0){
                if(i-left+1<len){
                    start=left;
                    len=i-left+1;
                }
                if(have[s[left]]<=need[s[left]]) count++;
                have[s[left]]--;
                left++;
            }
        }
        return start==-1?"":s.substr(start,len);
    }
};