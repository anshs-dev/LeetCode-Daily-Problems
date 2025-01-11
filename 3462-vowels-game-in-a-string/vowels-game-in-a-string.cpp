class Solution {
public:
    bool doesAliceWin(string s) {
        string vowels="aeiouAEIOU";
        int count=0;
        for(char x:s){
            if(vowels.find(x)!=string::npos)
            count++;
        }
        return count!=0 && count>0;
    }
};