class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int count=0;
        vector<int>result(words.size()+1,0);
        string vowels="aeiou";
        for(int i=0;i<words.size();i++){
        if(vowels.find(words[i][0])!=std::string::npos && vowels.find(words[i].back())!=std::string::npos)
        result[i+1]=result[i]+1;
        else
        result[i+1]=result[i];
        }
        vector<int>final;
        int n=words.size();
        for(auto x:queries){
            final.push_back(result[x[1]+1]-result[x[0]]);
        }
        return final;
    }
};