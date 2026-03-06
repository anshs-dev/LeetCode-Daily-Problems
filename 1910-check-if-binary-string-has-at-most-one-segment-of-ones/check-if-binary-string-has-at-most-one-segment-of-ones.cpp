class Solution {
public:
    bool checkOnesSegment(string s) {
        bool first=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' && first) return false;
            while(i<s.size() && s[i]=='1'){
                i++;
                first=true;
            }
        }
        return true;
    }
};