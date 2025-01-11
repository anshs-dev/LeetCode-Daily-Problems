class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,0);
        int left=0,right=0,count=0;
        for(right=0;right<s.length();right++){
            v[s[right]-'a']++;
            while(v[0]>=1 && v[1]>=1 && v[2]>=1){
                count+=s.length()-right;
                v[s[left]-'a']--;
                left++;
            } 
        }
        return count;
    }
};