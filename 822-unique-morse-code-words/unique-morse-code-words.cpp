class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string>m;
        for(int i=0;i<26;i++){
        m['a'+i]=s[i];
        }
        unordered_map<string,int>m2;
        for(string x:words){
            string result="";
            for(char c:x)
            result+=m[c];
            m2[result]++;
        }
        return m2.size();
    }
};