class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<int,char>m;
        for(int i=1;i<=26;i++)
        m[i]='a'+(i-1);
        string result="";
        for(int i=0;i<s.length();){
            if(i+2<s.length() && s[i+2]=='#'){
            int num=stoi(s.substr(i,2));
            result+=m[num];
            i+=3;
            }
            else{
                int num=s[i]-'0';
                result+=m[num];
                i++;
            }
        }
        return result;
    }
};