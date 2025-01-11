class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>result;
        for(int i=0;i<s.length();i+=k){
            string temp=s.substr(i,k);
            if(temp.length()<k){
                temp.append(k-temp.length(),fill);
            }
            result.push_back(temp);
        }
        return result;
    }
};