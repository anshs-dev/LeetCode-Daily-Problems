class Solution {
public:
    string sortSentence(string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss>>word)
        v.push_back(word);
        sort(v.begin(),v.end(),[](const string a,const string b){
          return a.back()<b.back();
        });
        string result="";
      for(string x:v){
      for(char n:x){
        if(isalpha(n))
        result+=n;
      }
      result+=' ';
      }
      result.pop_back();
     return result;
    }
};