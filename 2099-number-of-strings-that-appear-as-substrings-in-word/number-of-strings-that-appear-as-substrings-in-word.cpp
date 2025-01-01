class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(string x:patterns){
            if(x.length()>word.length())
            continue;
        for(int i=0;i<word.length()-x.length()+1;i++){
            if(word.substr(i,x.length())==x){
                count++;
                break;
            }
    
        }
        }
        return count;
    }
};