class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>s1;
        char great='\0';
        for(char x:s){
            s1.insert(x);
            if(s1.count(tolower(x)) && s1.count(toupper(x))){
            if(great!='\0'){
            great=max(great,(char)toupper(x));
            }
            else{
                great=toupper(x);
            }
        }
        }
        return great?string(1,great):"";
    }
};