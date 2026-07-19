class Solution {
public:
    bool check(vector<int> &freq,int k){
        for(auto x:freq) if(x>0 && x<k) return false;
        return true;
    }
    bool helper(string s, int sz, int k){
        vector<int> v(26,0);
        int left=0;
        for(int right=0;right<s.size();right++){
            v[s[right]-'a']++;
            if(right-left+1>=sz){
                if(check(v,k)) return true;
                v[s[left]-'a']--;
                left++;
            }
        }
        return false;
    }
    int longestSubstring(string s, int k) {
        int sz=s.size();
        for(int i=sz;i>=k;i--) if(helper(s,i,k)) return i;
        return 0;
    }
};