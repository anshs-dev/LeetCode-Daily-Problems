class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max_len=0;
        for(string x:strs){
            if(any_of(x.begin(),x.end(),::isalpha))
            max_len=max(max_len,(int)x.length());
            else
            max_len=max(max_len,stoi(x));
        }
        return max_len;
    }
};