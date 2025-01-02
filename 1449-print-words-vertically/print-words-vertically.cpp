class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>words;
        stringstream ss(s);
        string word="";
        size_t max_len=0;
        while(ss>>word){
        words.push_back(word);
        max_len=max(max_len,word.length());
        }
        vector<string>res;
        int i=0;
        while(max_len--){
        string temp="";
        for(string x:words){
            if(i>=x.length()){
                temp+=" ";
                continue;
            }
            temp+=x[i];
        }
        res.push_back(temp);
        string r=res.back();
        res.pop_back();
        size_t last=r.find_last_not_of(" ");
        if(last!=string::npos)
        res.push_back(r.substr(0,last+1));
        i++;
        }
        
        return res;
    }
};