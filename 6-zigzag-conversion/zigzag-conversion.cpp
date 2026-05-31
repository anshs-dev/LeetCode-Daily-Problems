class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1 || numRows>=s.size()) return s;
        vector<string>v(numRows);
        int i=0,dir=1;
        for(char x:s){
            v[i]+=x;
            if(i==0) dir=1;
            if(i==numRows-1) dir=-1;
            i+=dir;
        }
        string res="";
        for(string x:v) res+=x;
        return res;
    }
};