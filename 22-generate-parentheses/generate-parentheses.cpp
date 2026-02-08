class Solution {
public:
    void backtrack(vector<string> &res, int n, string temp,int count){
        if(temp.length()==2*n && count==0){
            res.push_back(temp);
            return;
        }
        if(temp.length()>2*n) return;
        if(count<n){
        temp+="(";
        backtrack(res,n,temp,count+1);
        temp.pop_back();
        }
        if(count>0){
        temp+=")";
        backtrack(res,n,temp,count-1);
        temp.pop_back();
    }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string t;
        backtrack(res,n,t,0);
        return res;
    }
};