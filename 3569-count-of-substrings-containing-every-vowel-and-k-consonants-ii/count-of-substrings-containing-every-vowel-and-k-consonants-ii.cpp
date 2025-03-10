class Solution {
public:
    bool isvowel(char x){
        if(tolower(x)=='a' || tolower(x)=='e' || tolower(x)=='i' || tolower(x)=='o' || tolower(x)=='u')
        return true;
        return false;
    }
    long long countOfSubstrings(string word, int k) {
        return calculation(word,k)-calculation(word,k+1);
    }
    long long calculation(string word,int k){
        int left=0,conso=0;
        long long subs=0;
        unordered_map<char,int>m;
        for(int right=0;right<word.length();right++){
            if(isvowel(word[right])) m[word[right]]++;
            else conso++;
            while(conso>=k && m.size()==5){
                subs+=(word.size()-right);
                if(isvowel(word[left])){
                    m[word[left]]--;
                    if(m[word[left]]==0) m.erase(word[left]);
                }
                else{
                    conso--;
                }
                left++;
            }
        }
            return subs;
    }
};