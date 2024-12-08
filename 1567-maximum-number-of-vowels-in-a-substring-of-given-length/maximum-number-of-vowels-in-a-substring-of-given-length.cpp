class Solution {
public:
    int maxVowels(string s, int k) {
        int vowel=0;
        int max_vowel=0;
        for(int i=0;i<k;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowel++;
            max_vowel=max(vowel,max_vowel);
        }
        }
        for(int i=k;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vowel++;
             if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
            vowel--;
            max_vowel=max(vowel,max_vowel);
        }
        return max_vowel;
    }
};