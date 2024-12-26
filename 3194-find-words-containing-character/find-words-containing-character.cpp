class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i=0;
        vector<int>result;
        for(string str:words){
            unordered_map<char,int>m;
            for(char c:str)
            m[c]++;
            if(m[x]>0)
            result.push_back(i);
            i++;
        }
        return result;
    }
};