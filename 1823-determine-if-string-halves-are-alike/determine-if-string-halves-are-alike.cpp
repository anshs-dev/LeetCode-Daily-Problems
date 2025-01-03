class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowels="aeiou";
        int count1=0;
        int count2=0;
        for(int i=0;i<s.length()/2;i++){
            if(vowels.find(tolower(s[i]))==std::string::npos)
            count1++;
        }
        for(int i=s.length()/2;i<s.length();i++){
            if(vowels.find(tolower(s[i]))==std::string::npos)
            count2++;
        }
        return count1==count2;
    }
};