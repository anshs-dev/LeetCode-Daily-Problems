class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i=0;
        vector<int>result;
        for(string str:words){
            if(str.find(x)!=std::string::npos)
            result.push_back(i);
            i++;
        }
        return result;
    }
};