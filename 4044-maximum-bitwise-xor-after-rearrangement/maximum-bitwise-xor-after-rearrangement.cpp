class Solution {
public:
    string maximumXor(string s, string t) {
        int count=0;
        for(char x:t) if(x=='1') count++;
        vector<bool>used(s.size(),false);
        for(int i=0;i<s.size() && count>0;i++) if(s[i]=='0'){
            count--;
            used[i]=true;
            s[i]='1';
        }
        for(int i=s.size()-1;i>=0 && count>0;i--){
            if(!used[i]){
                if(s[i]=='1') s[i]='0';
                else s[i]='1';
                count--;
            }
        }
        return s;
        
    }
};