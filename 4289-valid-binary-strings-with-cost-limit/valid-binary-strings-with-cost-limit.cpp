class Solution {
public:
    void dfs(int n, int k, string curr, vector<string> &res,int i){
        if(curr.size()==n){
            if(k>=0) res.push_back(curr);
            return;
        }
        curr+="0";
        dfs(n,k,curr,res,i+1);
        curr.pop_back();
        if(curr.empty() || curr.back()!='1'){
        curr+="1";
        dfs(n,k-i,curr,res,i+1);
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string> res;
        string temp="";
        dfs(n,k,temp,res,0);
        return res;
    }
};