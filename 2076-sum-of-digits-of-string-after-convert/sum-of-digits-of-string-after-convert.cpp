class Solution {
public:
    int getLucky(string s, int k) {
        unordered_map<char,int>m;
        string result="";
        for(char a='a';a<='z';a++)
        m[a]=a-'a'+1;
        for(char x:s)
        result+=to_string(m[x]);
        int num=0;
        while(k--){
            num=0;
        for(char x:result)
        num+=x-'0';
        result=to_string(num);
        }
        return num;
    }
};