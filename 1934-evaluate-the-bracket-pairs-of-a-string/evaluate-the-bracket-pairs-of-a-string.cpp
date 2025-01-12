class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string result="";
        int right=0;
        unordered_map<string,string>m;
        for(auto x:knowledge)
         m[x[0]]=x[1];
        while(right<s.length()){
            if(s[right]=='('){
                string temp="";
                right++;
                while(s[right]!=')'){
                    temp+=s[right];
                    right++;
                }
                if(!m.count(temp))
                result+='?';
                else
                result+=m[temp];
            }
            else{
                result+=s[right];
            }
            right++;
        }
        return result;
    }
};