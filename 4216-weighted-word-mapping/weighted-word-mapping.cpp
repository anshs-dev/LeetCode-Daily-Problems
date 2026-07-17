class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(auto x:words){
            int temp=0;
            for(char c:x) temp+=weights[c-'a'];
            temp=temp%26;
            temp=26-temp-1;
            res+=('a'+temp);
        }
        return res;
    }
};