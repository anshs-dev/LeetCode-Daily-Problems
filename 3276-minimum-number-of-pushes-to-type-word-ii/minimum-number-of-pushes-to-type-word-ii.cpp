class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>m;
        for(char x:word) m[x]++;
        sort(word.begin(),word.end(),[&](char a, char b) {
            if(m[a]!=m[b]) 
            return m[a]>m[b];  
            return a<b;
        });
        int temp=8,count=1,current=1,distinctCount=0;
        char lastChar=word[0]; 
        for (int i = 1; i < word.length(); i++) {
            if (word[i] != lastChar) {
                distinctCount++;
                lastChar = word[i];
            }
            if (distinctCount==8) {
                current++;
                distinctCount=0;
            }
            count+=current;
        }
        return count;
    }
};
