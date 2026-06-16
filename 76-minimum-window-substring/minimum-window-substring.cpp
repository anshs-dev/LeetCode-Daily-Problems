class Solution {
public:
    bool check(vector<int> &v1,vector<int> &v2){
        for(int i=0;i<60;i++) if(v1[i]>v2[i]) return false;
        return true;
    }
    string minWindow(string s, string t) {
        int left=0,len=INT_MAX,start=-1;
        vector<int>v(60,0),v2(60,0);
        for(char x:t) v[x-65]++;
        for(int i=0;i<s.size();i++){
            v2[s[i]-65]++;
            while(left<=i && check(v,v2)){
                if(i-left+1<len){
                    start=left;
                    len=i-left+1;
                }
                v2[s[left]-65]--;
                left++;
            }
        }
        return start==-1?"":s.substr(start,len);
    }
};