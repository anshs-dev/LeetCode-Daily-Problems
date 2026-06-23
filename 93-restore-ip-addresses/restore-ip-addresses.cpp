class Solution {
public:
    vector<string>res;
    void dfs(string s, string curr, int i,int& dots){
        if(i==s.size() && dots==-1){
            res.push_back(curr);
            return;
        }
        if(i>=s.size()) return;
        if(dots<0) return;
        if(s[i]=='0'){
            curr+="0";
            if(dots>0) curr+=".";
            dots--;
            dfs(s,curr,i+1,dots);
            dots++;
        }
        else{
            if(s.size()-i>=1){
                curr+=s.substr(i,1);
                if(dots>0) curr+=".";
                dots--;
                dfs(s,curr,i+1,dots);
                dots++;
                if(curr.back()=='.') curr.pop_back();
                curr.pop_back();
            }
            if(s.size()-i>=2){
                curr+=s.substr(i,2);
                if(dots>0) curr+=".";
                dots--;
                dfs(s,curr,i+2,dots);
                dots++;
                if(curr.back()=='.') curr.pop_back();
                for(int j=1;j<=2;j++) curr.pop_back();
            }
            if(s.size()-i>=3 && stoi(s.substr(i,3))<=255){
                curr+=s.substr(i,3);
                if(dots>0) curr+=".";
                dots--;
                dfs(s,curr,i+3,dots);
                dots++;;
                if(curr.back()=='.') curr.pop_back();
                for(int j=1;j<=3;j++) curr.pop_back();
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        string curr="";
        int dots=3;
        dfs(s,curr,0,dots);
        return res;
    }
};