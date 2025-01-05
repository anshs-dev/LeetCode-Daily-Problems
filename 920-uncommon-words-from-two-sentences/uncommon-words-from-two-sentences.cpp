class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m1;
        stringstream ss(s1);
        vector<string>result;
        string word="";
        while(ss>>word)
        m1[word]++;
        stringstream ss2(s2);
        word="";
        while(ss2>>word)
        m1[word]++;
        for(auto x:m1){
            if(x.second==1)
            result.push_back(x.first);
        }
        return result;
    }
};