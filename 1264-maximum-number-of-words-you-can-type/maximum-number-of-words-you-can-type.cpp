class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
       stringstream ss(text);
       vector<string>v;
       string word="";
       while(ss>>word) v.push_back(word);
       int count=v.size();
       for(string x:v){
        for(char a:brokenLetters){
            if(x.find(a)!=std::string::npos){
                count--;
                break;
            }
        }
       }
       return count;
    }
};