class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string word="";
        vector<string>result;
        while(ss>>word)
        result.push_back(word);
        vector<string>res;
        for(int i=0;i<result.size()-1;i++){
            if(result[i]==first && result[i+1]==second){
                if(i+2!=result.size())
                res.push_back(result[i+2]);
            }
        }
        return res;
    }
};