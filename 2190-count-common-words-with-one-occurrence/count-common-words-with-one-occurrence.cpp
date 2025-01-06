class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>m1,m2;
        for(string x:words1)
        m1[x]++;
        for(string x:words2)
        m2[x]++;
        int count=0;
        for(string x:words1){
            if(m1[x]==1 && m2[x]==1)
            count++;
        }
        return count;
    }
};