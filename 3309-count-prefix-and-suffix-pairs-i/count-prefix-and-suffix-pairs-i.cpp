class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(i==j) continue;
                if(words[j].length()<words[i].length())
                continue;
                int len=words[i].length();
                string m=words[j].substr(0,len);
                string n=words[j].substr(words[j].length()-len);
                if(m==words[i] && n==words[i])
                count++;
               }
                
            }
        
        return count;
    }
};