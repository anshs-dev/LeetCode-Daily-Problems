class Solution {
public:
    bool isvowel(char x){
        return x=='a' || x=='e' || x=='i' || x=='o' || x=='u';
    }
    int countVowelSubstrings(string word) {
        int count=0;
        unordered_set<char>s;
        for(int i=0;i<word.length();i++){
            s.clear();
            for(int j=i;j<word.length() && isvowel(word[j]);j++){
                s.insert(word[j]);
                if(s.size()==5) count++;
            }
        }
        return count;
    }
};