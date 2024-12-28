class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>m;
        for(char x:allowed)
        m[x]++;
        int count=0;
        for(string x:words){
            int flag=1;
            for(char c:x){
                if(!m.count(c)){
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            count++;
        }
        return count;
    }
};