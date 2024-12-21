class Solution {
public:
    string reversePrefix(string word, char ch) {
        string rev="";
        string right="";
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                rev=word.substr(0,i+1);
                right=word.substr(i+1);
                break;
            }
        }
        reverse(rev.begin(),rev.end());
        rev=rev+right;
        if(rev.empty())
        return word;
        return rev;
    }
};