class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        int flag=0;
        int temp;
        for(auto &x:m){
            if(flag==0){
                temp=x.second;
                flag=1;
            }
            if(x.second!=temp)
            return false;
        }
        return true;
    }
};