class Solution {
public:
    bool ispal(string temp,int i,int j){
        if(i>=j) return true;
        return temp[i]==temp[j] && ispal(temp,i+1,j-1);
    }
    void dfs(vector<vector<string>> &res,vector<string> &curr, string s,int i){
        if(i==s.size()){
            res.push_back(curr);
            return;
        }
        for(int j=i;j<s.length();j++){
            string temp=s.substr(i,j-i+1);
            if(ispal(temp,0,temp.size()-1)){
                curr.push_back(temp);
                dfs(res,curr,s,j+1);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string>curr;
        dfs(res,curr,s,0);
        return res;
    }
};