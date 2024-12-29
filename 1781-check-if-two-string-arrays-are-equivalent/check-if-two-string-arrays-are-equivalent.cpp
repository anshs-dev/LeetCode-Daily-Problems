class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1="",result2="";
        for(string x:word1)
        result1+=x;
        for(string x:word2)
        result2+=x;
        return result1==result2;
    }
};