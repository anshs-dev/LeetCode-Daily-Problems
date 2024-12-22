class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>m;
        for(char x:chars)
        m[x]++;
        int count=0;
        for(string x:words){
            unordered_map<char,int>temp;
            int flag=1;
            for(char c:x){
            temp[c]++;
            if(m[c]<temp[c]){
                flag=0;
                break;
            }
            }
            if(flag==1)
            count+=x.length();
            
        }
        return count;
    }
};