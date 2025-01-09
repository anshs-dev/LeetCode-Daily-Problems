class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(string x:words){
        string temp=x.substr(0,pref.length());
        if(temp==pref) count++;
        }
        return count;
    }
};