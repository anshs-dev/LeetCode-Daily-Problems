class Solution {
public:
    string removeOccurrences(string s, string part) {
        int len=part.length();
        size_t pos=s.find(part);
        while(pos!=string::npos){
            s.erase(pos,len);
            pos=s.find(part);
        }
        return s;
    }
};