class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>m;
        int count=0;
        for(char x:s) m[x]++;
        for(auto &x:m){
            if(x.second%2==0)
                count+=x.second-2;
            else
                count+=x.second-1;
        }
        return s.length()-count;
    }
};