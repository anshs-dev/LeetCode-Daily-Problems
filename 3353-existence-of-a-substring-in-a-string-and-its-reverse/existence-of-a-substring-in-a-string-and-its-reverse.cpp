class Solution {
public:
    bool isSubstringPresent(string s) {
        string x=s;
        if(x.length()<2) return false;
        reverse(x.begin(),x.end());
        for(int i=0;i<s.length()-1;i++){
            string temp=s.substr(i,2);
            if(x.find(temp)!=string::npos)
            return true;
        }
        return false;
    }
};