class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        vector<string>result;
        string word="";
        while(ss>>word) result.push_back(word);
        for(string &x:result){
            cout<<x;
            if(x.length()<=2){
                for(char &a:x) a=tolower(a);
            }
            else{
                x[0]=toupper(x[0]);
                for(int i=1;i<x.length();i++){
                    x[i]=tolower(x[i]);
                }
            }
        }
        string result1="";
        for(string x:result){
            result1+=x;
            result1+=" ";
        }
        result1.pop_back();
        return result1;
    }
};