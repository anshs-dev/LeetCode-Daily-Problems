class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=(s.length())*(s.length()+1)/2,left=0;
        unordered_map<char,int>m;
        for(int right=0;right<s.length();right++){
            m[s[right]]++;
            while(m.size()>2){
                m[s[left]]--;
                if(m[s[left]]==0) m.erase(s[left]);
                left++;
            }
            count-=(right-left+1);
        }
        return count;
    }
};