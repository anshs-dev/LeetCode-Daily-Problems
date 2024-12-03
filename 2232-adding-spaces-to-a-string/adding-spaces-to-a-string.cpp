class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int j=0;
        string result;
        for(int i=0;i<s.length();i++){
            if(j<spaces.size() && i==spaces[j]){
                result+=" ";
                j++;
            }
            result+=s[i];
        }
        return result;

    }
};