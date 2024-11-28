class Solution {
public:
    int minimumMoves(string s) {
        int count=0;
        for(int i=0;i<s.length();){
            if(s[i]=='X'){
                count++;
                i+=3;
            }
            else{
                i+=1;
            }
        }
        return count;
    }
};