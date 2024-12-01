class Solution {
public:
    string arrangeWords(string text) {
       vector<pair<string,int>>v;
       string x;
       for(char c:text){
       if(c==' '){
        v.push_back({x,x.length()});
        x="";
       }
       else
       x+=c;
       }
       if(!x.empty()){
        v.push_back({x,x.length()});
       }
       stable_sort(v.begin(),v.end(),[](const auto &a,const auto &b){
        return a.second<b.second;
       });
       string result;
       for(auto &b:v){
       result+=b.first;
       result+=" ";
       }
       result[0]=toupper(result[0]);
       for(int i=1;i<result.length();i++)
       result[i]=tolower(result[i]);
       result.resize(result.length()-1);
    return result;
    }
};