class Solution {
public:
    bool isvowel(string x){
        string vowel="aeiou";
        if(vowel.find(x[0])!=std::string::npos && vowel.find(x.back())!=std::string::npos)
        return true;
        else
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(isvowel(words[i]))
            count++;
        }
        return count;
    }
};