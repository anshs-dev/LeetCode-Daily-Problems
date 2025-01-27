class Solution {
public:
    string getEncryptedString(string s, int k) {
        k=k%s.length();
        string result=s;
        for(int i=0;i<s.length();i++) result[i]=s[(i+k)%(int)s.size()];
        return result;
    }
};